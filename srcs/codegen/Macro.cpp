#include <set>
#include "CodeGenContext.h"
#include "nodes.h"

void printError(std::string st);
int if_then_index = 0;
int if_marge_index = 0;
int while_then_index = 0;
int while_marge_index = 0;

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
			return builder.CreateFCmpOEQ(lhs, rhs);
		}
		else if (((StringNode *)node)->getStr() == "NOT_EQUAL")
		{
			node->check();
			llvm::Value *lhs = EXR_macro(context, node->getNext());
			llvm::Value *rhs = EXR_macro(context, node->getNext()->getNext());
			return builder.CreateFCmpONE(lhs, rhs);
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
			return builder.CreateLoad(context->FindST(node));
		}
		else
		{
			std::string idname = ((StringNode *)node)->getStr().c_str();
			printError("The variable is not declared(" + idname + ")");
			return NULL;
		}
	}
	else if (node->isDoubleNode())
	{
		node->check();
		return llvm::ConstantFP::get(*(context->getContext()), llvm::APFloat(((DoubleNode *)node)->getdouble()));
	}
	return NULL;
}

static llvm::Value *DECL_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	if (context->FindST(node) == NULL)
	{
		node->check();
		llvm::AllocaInst *alloc = builder.CreateAlloca(llvm::Type::getDoubleTy(*(context->getContext())), nullptr);
		context->st->insert(((StringNode *)node)->getStr(), (llvm::Value *)alloc);
		return alloc;
	}
	else
	{
		std::string idname = ((StringNode *)(node->getNext()))->getStr().c_str();
		printError("redefinition error(" + idname + ")");
		return NULL;
	}
}

static llvm::Value *SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		llvm::Value *con = EXR_macro(context, node->getNext());
		if (!con->getType()->isDoubleTy())
			printError("Boolean value cannot be assigned to double");
		return builder.CreateStore(con, id);
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
		return NULL;
	}
}

static llvm::Value *DECL_SUBST_macro(CodeGenContext *context, Node *node)
{
	node->check();
	node = node->getChild();
	node->check();
	node = node->getNext();
	DECL_macro(context, node);
	return SUBST_macro(context, node);
}

static llvm::Value *ADD_SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		llvm::Value *exr = EXR_macro(context, node->getNext());
		if (!exr->getType()->isDoubleTy())
			printError("Boolean value cannot be assigned to double");
		llvm::Value *data = builder.CreateLoad(id);
		llvm::Value *add = builder.CreateFAdd(data, exr);
		return builder.CreateStore(add, id);
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
		return NULL;
	}
}

static llvm::Value *SUBT_SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		llvm::Value *exr = EXR_macro(context, node->getNext());
		if (!exr->getType()->isDoubleTy())
			printError("Boolean value cannot be assigned to double");
		llvm::Value *data = builder.CreateLoad(id);
		llvm::Value *add = builder.CreateFSub(data, exr);
		return builder.CreateStore(add, id);
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
		return NULL;
	}
}

static llvm::Value *MULT_SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		llvm::Value *exr = EXR_macro(context, node->getNext());
		if (!exr->getType()->isDoubleTy())
			printError("Boolean value cannot be assigned to double");
		llvm::Value *data = builder.CreateLoad(id);
		llvm::Value *add = builder.CreateFMul(data, exr);
		return builder.CreateStore(add, id);
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
		return NULL;
	}
}

static llvm::Value *DIV_SUBST_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		llvm::Value *exr = EXR_macro(context, node->getNext());
		if (!exr->getType()->isDoubleTy())
			printError("Boolean value cannot be assigned to double");
		llvm::Value *data = builder.CreateLoad(id);
		llvm::Value *add = builder.CreateFDiv(data, exr);
		return builder.CreateStore(add, id);
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
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
		if (!ans->getType()->isDoubleTy())
			printError("Boolean value cannot be output");
		return builder.CreateCall(context->FindFunc("printDouble"), std::vector<llvm::Value *>(1, ans));
	}
	return NULL;
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

	llvm::Value *id = context->FindST(node);
	if (id != NULL)
	{
		node->check();
		return builder.CreateCall(context->FindFunc("scanDouble"), std::vector<llvm::Value *>(1, id));
	}
	else
	{
		std::string idname = ((StringNode *)node)->getStr().c_str();
		printError("The variable is not declared(" + idname + ")");
		return NULL;
	}
}

llvm::Value *condition_calc(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *condition = EXR_macro(context, node);
	if (condition->getType()->isDoubleTy())
	{
		if (condition == llvm::ConstantFP::get(*(context->getContext()), llvm::APFloat(double(0.0))))
			condition = builder.getInt1(false);
		else
			condition = builder.getInt1(true);
	}

	return condition;
}

static llvm::Value *IF_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *condition = condition_calc(context, node);

	llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(*(context->getContext()), std::string("if_then") + std::to_string(if_then_index++), context->getnowFunc());
	llvm::BasicBlock *margeBB = llvm::BasicBlock::Create(*(context->getContext()), std::string("if_marge") + std::to_string(if_marge_index++));

	builder.CreateCondBr(condition, thenBB, margeBB);

	builder.SetInsertPoint(thenBB);
	context->setnowBlock(thenBB);
	context->st->push();
	context->MakeMacro(node->getNext());
	builder.SetInsertPoint(context->getnowBlock());
	builder.CreateBr(margeBB);
	context->st->pop();
	
	context->getnowFunc()->getBasicBlockList().push_back(margeBB);
	builder.SetInsertPoint(margeBB);
	context->setnowBlock(margeBB);

	return NULL;
}

static llvm::Value *WHILE_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	llvm::Value *condition = condition_calc(context, node);

	llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(*(context->getContext()), std::string("while_then") + std::to_string(while_then_index++), context->getnowFunc());
	llvm::BasicBlock *margeBB = llvm::BasicBlock::Create(*(context->getContext()), std::string("while_marge") + std::to_string(while_marge_index++));

	builder.CreateCondBr(condition, thenBB, margeBB);

	builder.SetInsertPoint(thenBB);
	context->setnowBlock(thenBB);
	context->st->push();
	context->MakeMacro(node->getNext());
	builder.SetInsertPoint(context->getnowBlock());
	condition = condition_calc(context, node);
	builder.CreateCondBr(condition, thenBB, margeBB);
	context->st->pop();

	context->getnowFunc()->getBasicBlockList().push_back(margeBB);
	builder.SetInsertPoint(margeBB);
	context->setnowBlock(margeBB);

	return NULL;
}

/*static llvm::Value *IF_END_macro(CodeGenContext *context, Node *node)
{
	llvm::IRBuilder<> builder = *(context->getBuilder());
	builder.SetInsertPoint(context->getnowBlock());

	context->popBB();
	if (!context->BBst_is_empty())
	{
		builder.CreateBr(context->BBst_top());
		context->setnowBlock(context->BBst_top());
		builder.SetInsertPoint(context->BBst_top());
	}
	return NULL;
}*/

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
		{"DECL_SUBST", DECL_SUBST_macro},
		{"SUBST", SUBST_macro},
		{"ADD_SUBST", ADD_SUBST_macro},
		{"SUBT_SUBST", SUBT_SUBST_macro},
		{"MULT_SUBST", MULT_SUBST_macro},
		{"DIV_SUBST", DIV_SUBST_macro},
		{"OUTPUT", OUTPUT_macro},
		{"NEWLINE", NEWLINE_macro},
		{"INPUT", INPUT_macro},
		{"IF", IF_macro},
		//{"IF_END", IF_END_macro},
		{"WHILE", WHILE_macro},
		{NULL, NULL}};