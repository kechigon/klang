#include "CodeGenContext.h"
#include "nodes.h"

void printError(std::string st);

static llvm::Value* EXR_macro(CodeGenContext* context, Node* node) {
	llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());

	if(node->isNode()) {
		node->check();
		return EXR_macro(context, node->getChild());
	}
	else if(node->isStringNode()) {
		if(((StringNode*)node)->getStr() == "PULS") {
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFAdd(lhs, rhs);
		}
		else if(((StringNode*)node)->getStr() == "MINUS") {
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFSub(lhs, rhs);
		}
		else if(((StringNode*)node)->getStr() == "MULT") {
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFMul(lhs, rhs);
		}
		else if(((StringNode*)node)->getStr() == "DIV") {
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFDiv(lhs, rhs);
		}
	}
	else if(node->isDoubleNode()) {
		node->check();
		return llvm::ConstantFP::get(llvm::Type::getDoubleTy(*(context->getContext())), ((DoubleNode*)node)->getdouble());
	}
	return NULL;
}

static llvm::Value* DECL_macro(CodeGenContext* context, Node* node) {
  llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());
	llvm::Type* type = context->getType(node);

	if(context->FindST(node->getNext()) == NULL) {
		node->check();
		node->getNext()->check();
  	llvm::AllocaInst *alloc = builder.CreateAlloca(type, nullptr, ((StringNode*)(node->getNext()))->getStr().c_str());
		if(((StringNode*)node)->getStr() == "DOUBLE") context->st->insert(((StringNode*)(node->getNext()))->getStr(), double_type, (llvm::Value*)alloc);
		else if(((StringNode*)node)->getStr() == "STRING") context->st->insert(((StringNode*)(node->getNext()))->getStr(), string_type, (llvm::Value*)alloc);
		return alloc;
	}
	else {
		printError("redefinition error");
		return NULL;
	}
}

static llvm::Value* SUBST_macro(CodeGenContext* context, Node* node) {
	llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());

	if(!node->isNode()) {
		if(context->FindST(node) != NULL) {
			node->check();
			node->getNext()->check();
			llvm::StringRef sr(((StringNode*)(node->getNext()))->getStr());
			llvm::Value *con = builder.CreateGlobalStringPtr(sr);
			return builder.CreateStore(con, context->FindST(node)->data);
		}
		else {
			printError("The variable is not declared.");
			return NULL;
		}
	}
	return NULL;
}

static llvm::Value* OUTPUT_macro(CodeGenContext* context, Node* node) {
	llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());

	if(node->isStringNode() && ((StringNode*)node)->isLiteral()) {
		llvm::StringRef sr(((StringNode*)node)->getStr());
		llvm::Value *con = builder.CreateGlobalStringPtr(sr);
		node->check();
		return builder.CreateCall(context->FindFunc("printStr"), std::vector<llvm::Value *>(1, con));
	}
	else {
			llvm::Value *ans = EXR_macro(context, node);
			llvm::Type *t = ans->getType();
			if(t->isDoubleTy()) return builder.CreateCall(context->FindFunc("printDouble"), std::vector<llvm::Value *>(1, ans));
			else if(t->isPointerTy()) return builder.CreateCall(context->FindFunc("printStr"), std::vector<llvm::Value *>(1, ans));
			return NULL;
	}
}

static llvm::Value* NEWLINE_macro(CodeGenContext* context, Node* node) {
	llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());

	return builder.CreateCall(context->FindFunc("printNewLine"));
}

static llvm::Value* INPUT_macro(CodeGenContext* context, Node* node) {
	llvm::IRBuilder<> builder = *(context->getBuilder());
  builder.SetInsertPoint(context->getnowBlock());

   id *id = context->FindST(node);
	if(id != NULL) {
		node->check();
		if(id->type == double_type) return builder.CreateCall(context->FindFunc("scanDouble"), std::vector<llvm::Value *>(1, id->data));
		//else if(id->type == string_type) return builder.CreateCall(context->FindFunc("scanStr"), std::vector<llvm::Value *>(1, id->data));
		else return NULL;
	}
	else {
		printError("The variable is not declared.");
		return NULL;
	}
}

/*static llvm::Value* FUNC_macro(CodeGenContext* context, Node* node) {

	node = node->getNext();
	std::string function_name;
	if (node->isStringNode()) {
		StringNode* str_node = (StringNode*)node;
		function_name = str_node->getStr();
	}
	id* i = context->FindST(function_name);
	if (i != NULL) {
    redefinitionError(function_name);
    return NULL;
  }

	Node* args_node = node = node->getNext();
	std::vector<std::string> arg_name;
	if (args_node->getChild() != NULL) {
		for (Node* pC = args_node->getChild(); pC != NULL; pC = pC->getNext()) 
		{
			StringNode* str_node = (StringNode*)pC;
			arg_name.push_back(str_node->getStr());	
		}
	}

	node = node->getNext();
	llvm::BasicBlock* bb = context->createBlock(F);

		context->MacroMake(args_node);
		int i = 0;
		for (auto arg = F->arg_begin(); i != arg_name.size(); ++arg, ++i) {
			arg->setName(arg_name[i]);
			Value* argumentValue = arg;
			ValueSymbolTable* st = bb->getValueSymbolTable();
			Value* v = st->lookup(arg_name[i]);
			new StoreInst(argumentValue, v, false, bb);
		}
	}
	context->MacroMake(node);

	bb = context->getNowBlock();
	if (bb->getTerminator() == NULL)
		ReturnInst::Create(*(context->getContext()), bb);
	return F;
}*/

extern const FuncReg macro_funcs[] = {
  {"DECL", DECL_macro},
	{"SUBST", SUBST_macro},
	{"OUTPUT", OUTPUT_macro},
	{"NEWLINE", NEWLINE_macro},
	{"INPUT", INPUT_macro},
  {NULL, NULL}
};