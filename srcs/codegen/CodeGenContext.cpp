#include <stdio.h>
#include <queue>
#include "CodeGenContext.h"
#include "StringNode.h"

extern const FuncReg macro_funcs[];

/*llvm::Value* CodeGenContext::MakeMacro(Node* node) {
	if (node == NULL) return NULL;
	if (node->isStringNode()) {
		StringNode* str_node = (StringNode*)node;
		CodeGenFunction func = getMacro(str_node->getStr());
		if (func != NULL) {
		func(this, node->getNext());
		} 
		return NULL;
	} 
	if (node->getChild() != NULL && node->getChild()->isStringNode())
		return MakeMacro(node->getChild());
	llvm::Value* ans;
	for (Node* p = node->getChild(); p != NULL; p = p->getNext()) 
		ans = MakeMacro(p);
	return ans;
}*/

void CodeGenContext::MakeMacro(Node *node)
{
	if (node == NULL)
		return;
	NodeType nt = node->getType();
	if (nt == node_t && !node->ischecked())
	{
		node->check();
		MakeMacro(node->getChild());
	}
	if (nt == string_node_t && !node->ischecked())
	{
		StringNode *str_node = (StringNode *)node;
		CodeGenFunction func = getMacro(str_node->getStr());
		if (func != NULL)
		{
			node->check();
			func(this, node->getNext());
		}
	}
	std::queue<Node *> bros;
	Node *now = node;
	while (now->checknext())
	{
		bros.push(now->getNext());
		now = now->getNext();
	}
	while (!bros.empty())
	{
		nt = bros.front()->getType();
		if (nt == node_t && !bros.front()->ischecked())
		{
			bros.front()->check();
			MakeMacro(bros.front()->getChild());
		}
		if (nt == string_node_t && !bros.front()->ischecked())
		{
			StringNode *str_node = (StringNode *)bros.front();
			CodeGenFunction func = getMacro(str_node->getStr());
			if (func != NULL)
			{
				bros.front()->check();
				func(this, bros.front()->getNext());
			}
		}
		bros.pop();
	}
}

CodeGenFunction CodeGenContext::getMacro(std::string str)
{
	auto func = macro_map.find(str);
	if (func != macro_map.end())
		return func->second;
	else
		return NULL;
}

llvm::BasicBlock *CodeGenContext::createBlock()
{
	return nowBlock = llvm::BasicBlock::Create(*C, "", nowFunc);
}

llvm::BasicBlock *CodeGenContext::createBlock(llvm::Function *f)
{
	nowFunc = f;
	return nowBlock = llvm::BasicBlock::Create(*C, "entry", f);
}

void CodeGenContext::setContext(llvm::LLVMContext *Context)
{
	C = Context;
}
void CodeGenContext::setModule(llvm::Module *Module)
{
	M = Module;
}

void CodeGenContext::setIRBuilder(llvm::IRBuilder<> *IRBuilder)
{
	B = IRBuilder;
}

llvm::Value *CodeGenContext::FindST(Node *node) const
{
	if (node->isStringNode())
	{
		StringNode *str_node = (StringNode *)node;
		return FindST(str_node->getStr());
	}
	return NULL;
}

void CodeGenContext::AddMacros(const FuncReg *macro_funcs)
{
	while (true)
	{
		const char *name = macro_funcs->name;
		CodeGenFunction func = macro_funcs->func;
		if (name == NULL)
			return;
		macro_map.insert(std::pair<std::string, CodeGenFunction>(name, func));
		++macro_funcs;
	}
}

llvm::Type *CodeGenContext::getType(Node *node)
{
	if (node->isStringNode())
	{
		StringNode *str_node = (StringNode *)node;
		return getType(str_node->getStr());
	}
	return NULL;
}

llvm::Type *CodeGenContext::getType(std::string str)
{
	if (str == "VOID")
		return llvm::Type::getVoidTy(*C);
	if (str == "STRING")
		return llvm::Type::getInt8PtrTy(*C);
	if (str == "DOUBLE")
		return llvm::Type::getDoubleTy(*C);
	return 0;
}

void CodeGenContext::setnowFunc(llvm::Function *f)
{
	nowFunc = f;
}

void CodeGenContext::setnowBlock(llvm::BasicBlock *b)
{
	nowBlock = b;
}

llvm::Function *CodeGenContext::getnowFunc()
{
	return nowFunc;
}

llvm::BasicBlock *CodeGenContext::getnowBlock()
{
	return nowBlock;
}

llvm::IRBuilder<> *CodeGenContext::getBuilder()
{
	return B;
}

void CodeGenContext::resetST()
{
	st->reset();
}

void CodeGenContext::AddFunc(std::string name, llvm::Function *func)
{
	func_map[name] = func;
}

llvm::Function *CodeGenContext::FindFunc(std::string name) const
{
	auto p = func_map.find(name);
	if (p != func_map.end())
		return ((llvm::Function *)(*p).second);
	return NULL;
}

CodeGenContext::CodeGenContext(Node *node)
{
	root = node;
	st = new IDTable();
	AddMacros(macro_funcs);
}

CodeGenContext::~CodeGenContext()
{
	delete st;
}