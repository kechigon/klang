#ifndef CODE_GEN_H
#define CODE_GEN_H

#include "Node.h"
#include "CodeGenContext.h"

class CodeGenContext;
class CodeGen
{
public:
	CodeGen(Node* node);
	~CodeGen();
	
	void Make();
	void register_printInt(llvm::Module *module);
	void register_printStr(llvm::Module *module);
	void register_printNewLine(llvm::Module *module);
	void register_scanInt(llvm::Module *module);
	void register_scanDouble(llvm::Module *module);
	void register_scanStr(llvm::Module *module);

private:
	CodeGenContext* context;
};

#endif