#ifndef CODE_GEN_CONTENT_H
#define CODE_GEN_CONTENT_H

#include <map>
#include <stack>
#include <string>
#include <utility>
#include "Node.h"
#include "IdTable.h"

#include "llvm/IR/Verifier.h"
#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/ExecutionEngine/Interpreter.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/IR/ValueSymbolTable.h"
#include "llvm/IR/PassManager.h"

class CodeGenContext;
typedef llvm::Value *(*CodeGenFunction)(CodeGenContext *, Node *);
typedef struct _funcReg
{
	const char *name;
	CodeGenFunction func;
} FuncReg;

class CodeGenContext
{
public:
	CodeGenContext(Node *node);
	~CodeGenContext();

	void MakeBegin()
	{
		MakeMacro(root);
	}

	void MakeMacro(Node *node);
	CodeGenFunction getMacro(std::string str);

	void AddMacros(const FuncReg *macro_funcs);

	llvm::BasicBlock *createBlock();
	llvm::BasicBlock *createBlock(llvm::Function *f);

	void setnowFunc(llvm::Function *f);
	void setnowBlock(llvm::BasicBlock *b);
	llvm::Function *getnowFunc();
	llvm::BasicBlock *getnowBlock();
	llvm::IRBuilder<> *getBuilder();
	llvm::Module *getModule() { return M; };
	llvm::LLVMContext *getContext() { return C; };

	llvm::Type *getType(Node *);
	llvm::Type *getType(std::string str);

	void setContext(llvm::LLVMContext *Context);
	void setModule(llvm::Module *Module);
	void setIRBuilder(llvm::IRBuilder<> *IRBuilder);

	id *FindST(Node *node) const;
	id *FindST(std::string str) const
	{
		return st->find(str);
	}
	void resetST();
	IDTable *st;

	void AddFunc(std::string name, llvm::Function *func);
	llvm::Function *FindFunc(std::string name) const;

private:
	Node *root;

	llvm::LLVMContext *C;
	llvm::Module *M;
	llvm::IRBuilder<> *B;
	llvm::Function *nowFunc;
	llvm::BasicBlock *nowBlock;

	std::map<std::string, CodeGenFunction> macro_map;

	std::map<std::string, llvm::Function *> func_map;
};

#endif