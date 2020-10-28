#include <set>
#include "CodeGenContext.h"
#include "nodes.h"

void printError(std::string st);

static llvm::Value *EXR_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	if (node->isNode())
	{
		node->check();
		return EXR_macro(context, node->getChild());
	}
	else if (node->isStringNode())
	{
		if (((StringNode *)node)->getStr() == "PULS")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFAdd(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "MINUS")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFSub(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "MULT")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFMul(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "DIV")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFDiv(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "EQUAL")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateICmpEQ(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "NOT_EQUAL")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateICmpNE(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "MORE_EQUAL")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFCmpOGE(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "LESS_EQUAL")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFCmpOLE(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "MORE")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFCmpOGT(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "LESS")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFCmpOLT(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "AND")
		{
			node->check();
			std::set<llvm::Value *> false_values;
			false_values.insert(llvm::ConstantFP::get(*(context->getContext()), llvm::APFloat(double(0.0))));
			false_values.insert(builder.getInt1(false));
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			if ((false_values.find(lhs) == false_values.end()) && (false_values.find(rhs) == false_values.end()))
				return builder.getInt1(true);
			else
				return builder.getInt1(false);
		}
		else if (((StringNode *)node)->getStr() == "OR")
		{
			node->check();
			std::set<llvm::Value *> false_values;
			false_values.insert(llvm::ConstantFP::get(*(context->getContext()), llvm::APFloat(double(0.0))));
			false_values.insert(builder.getInt1(false));
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			if ((false_values.find(lhs) == false_values.end()) || (false_values.find(rhs) == false_values.end()))
				return builder.getInt1(true);
			else
				return builder.getInt1(false);
		}
		else if (((StringNode *)node)->getStr() == "UMINUS")
		{
			node->check();
			llvm::Value *exr = EXR_macro(context, node->getNext());
			llvm::ConstantFP *neg = llvm::ConstantFP::get(*(context->getContext()), llvm::APFloat(double(-1.0)));
			return builder.CreateFMul(exr, neg);
		}
		else if (context->FindST(node) != NULL)
		{
			node->check();
			llvm::Value *v = builder.CreateLoad(context->FindST(node)->data);
			if (v->getType()->isPointerTy())
			{
				std::string idname = ((StringNode *)node)->getStr().c_str();
				printError("You can't use strings in expressions("+idname+")");
			}
			return v;
		}
		return NULL;
	}
	else if (node->isDoubleNode())
	{
		node->check();
		return llvm::ConstantFP::get(llvm::Type::getDoubleTy(*(context->getContext())), ((DoubleNode *)node)->getdouble());
	}
	return NULL;
}

static llvm::Value *DECL_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());
	llvm::Type *type = context->getType(node);

	if (context->FindST(node->getNext()) == NULL)
	{
		node->check();
		node->getNext()->check();
		llvm::AllocaInst *alloc = builder.CreateAlloca(type, nullptr, ((StringNode *)(node->getNext()))->getStr().c_str());
		if (((StringNode *)node)->getStr() == "DOUBLE")
			context->st->insert(((StringNode *)(node->getNext()))->getStr(), double_type, (llvm::Value *)alloc);
		else if (((StringNode *)node)->getStr() == "STRING")
			context->st->insert(((StringNode *)(node->getNext()))->getStr(), string_type, (llvm::Value *)alloc);
		return alloc;
	}
	else
	{
		std::string idname = ((StringNode *)(node->getNext()))->getStr().c_str();
		printError("redefinition error("+idname+")");
		return NULL;
	}
}

static llvm::Value *SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	id *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		if (node->getNext()->isStringNode())
		{
			if (id->type != string_type) 
			{
				std::string idname = ((StringNode *)node)->getStr().c_str();
				printError("Type of value to be assigned does not match("+idname+")");
			}
			node->getNext()->check();
			llvm::StringRef sr(((StringNode *)(node->getNext()))->getStr());
			llvm::Value *con = builder.CreateGlobalStringPtr(sr);
			return builder.CreateStore(con, id->data);
		}
		else if (node->getNext()->isDoubleNode())
		{
			if (id->type != double_type)
			{
				std::string idname = ((StringNode *)node)->getStr().c_str();
				printError("Type of value to be assigned does not match("+idname+")");
			}
			node->getNext()->check();
			llvm::Value *con = llvm::ConstantFP::get(llvm::Type::getDoubleTy(*(context->getContext())), ((DoubleNode *)node->getNext())->getdouble());
			return builder.CreateStore(con, id->data);
		}
		else if (node->getNext()->isNode())
		{
			if (id->type != double_type)
			{
				std::string idname = ((StringNode *)node)->getStr().c_str();
				printError("Type of value to be assigned does not match("+idname+")");
			}
			llvm::Value *con = EXR_macro(context, node->getNext());
			if (!con->getType()->isDoubleTy())
				printError("Boolean value cannot be assigned to　double");
			return builder.CreateStore(con, id->data);
		}
		else
			return NULL;
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared("+idname+")");
		return NULL;
	}
}

static llvm::Value *OUTPUT_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	if (node->isStringNode() && ((StringNode *)node)->isLiteral())
	{
		llvm::StringRef sr(((StringNode *)node)->getStr());
		llvm::Value *con = builder.CreateGlobalStringPtr(sr);
		node->check();
		return builder.CreateCall(context->FindFunc("printStr"), std::vector<llvm::Value *>(1, con));
	}
	else
	{
		llvm::Value *ans = EXR_macro(context, node);
		llvm::Type *t = ans->getType();
		if (t->isDoubleTy())
			return builder.CreateCall(context->FindFunc("printDouble"), std::vector<llvm::Value *>(1, ans));
		else if (t->isPointerTy())
			return builder.CreateCall(context->FindFunc("printStr"), std::vector<llvm::Value *>(1, ans));
		return NULL;
	}
}

static llvm::Value *NEWLINE_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	return builder.CreateCall(context->FindFunc("printNewLine"));
}

static llvm::Value *INPUT_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	id *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		if (id->type == double_type)
			return builder.CreateCall(context->FindFunc("scanDouble"), std::vector<llvm::Value *>(1, id->data));
		//else if(id->type == string_type) return builder.CreateCall(context->FindFunc("scanStr"), std::vector<llvm::Value *>(1, id->data));
		else
			return NULL;
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared("+idname+")");
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
		{NULL, NULL}};