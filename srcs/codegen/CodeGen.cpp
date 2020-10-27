#include "CodeGen.h"
#include "CodeGenContext.h"
#include <string>
#include <map>
#include <vector>
#include <iostream>

void register_printStr(llvm::Module *module);
void register_printDouble(llvm::Module *module);
void register_printNewLine(llvm::Module *module);
void register_scanDouble(llvm::Module *module);
//void register_scanStr(llvm::Module *module);
extern bool show_module;

CodeGen::CodeGen(Node* node) {
  context = new CodeGenContext(node); 
}

CodeGen::~CodeGen() {
  if (context != NULL) delete context;
}

void CodeGen::Make() {
  llvm::LLVMContext Context;
	std::unique_ptr<llvm::Module> M(new llvm::Module("top", Context));
  llvm::IRBuilder<> builder(Context);
  context->setContext(&Context);
  context->setModule(M.get());
  context->setIRBuilder(&builder);

  register_printStr(M.get());
  register_printDouble(M.get());
  register_printNewLine(M.get());
  register_scanDouble(M.get());
  //register_scanStr(M.get());

  llvm::FunctionType *funcType = llvm::FunctionType::get(builder.getInt32Ty(), false);
  llvm::Function *mainFunc = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, "main", M.get());
  context->setnowFunc(mainFunc);
  llvm::BasicBlock *entrypoint = llvm::BasicBlock::Create(Context, "entrypoint", mainFunc);
  context->setnowBlock(entrypoint);

  context->MakeBegin();

  builder.SetInsertPoint(entrypoint);
  builder.CreateRet(builder.getInt32(0));

  if (llvm::verifyModule(*M)) {
		std::cout << "LLVM bytecode error!\n";
		exit(1);
	}
  if(show_module) {
    llvm::outs() << "-----LLVM module-----\n\n" << *M;
    llvm::outs().flush();
  }

  std::error_code ErrInfo;
	llvm::raw_ostream *out = new llvm::raw_fd_ostream("out.ll", ErrInfo, llvm::sys::fs::F_None);
	M->print(*out, nullptr);
  out->flush(); delete out;
	llvm::llvm_shutdown();
}

void CodeGen::register_printStr(llvm::Module *module) {
  std::vector<llvm::Type *> param_types(1, llvm::Type::getInt8PtrTy(module->getContext()));
  llvm::FunctionType* printStr_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(module->getContext()), param_types, false);
  llvm::Function *func = llvm::Function::Create(printStr_type, llvm::Function::ExternalLinkage, "printStr", module);
  context->AddFunc("printStr", func);
}

void CodeGen::register_printDouble(llvm::Module *module) {
  std::vector<llvm::Type *> param_types(1, llvm::Type::getDoubleTy(module->getContext()));
  llvm::FunctionType* printDouble_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(module->getContext()), param_types, false);
  llvm::Function *func = llvm::Function::Create(printDouble_type, llvm::Function::ExternalLinkage, "printDouble", module);
  context->AddFunc("printDouble", func);
}

void CodeGen::register_printNewLine(llvm::Module *module) {
  llvm::FunctionType* printNewLine_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(module->getContext()), false);
  llvm::Function *func = llvm::Function::Create(printNewLine_type, llvm::Function::ExternalLinkage, "printNewLine", module);
  context->AddFunc("printNewLine", func);
}

void CodeGen::register_scanDouble(llvm::Module *module) {
  std::vector<llvm::Type *> param_types(1, llvm::Type::getDoublePtrTy(module->getContext()));
  llvm::FunctionType* scanDouble_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(module->getContext()), param_types, false);
  llvm::Function *func = llvm::Function::Create(scanDouble_type, llvm::Function::ExternalLinkage, "scanDouble", module);
  context->AddFunc("scanDouble", func);
}

/*void CodeGen::register_scanStr(llvm::Module *module) {
  std::vector<llvm::Type *> param_types(1, llvm::Type::getInt8PtrTy(module->getContext()));
  llvm::FunctionType* scanStr_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(module->getContext()), param_types, false);
  llvm::Function *func = llvm::Function::Create(scanStr_type, llvm::Function::ExternalLinkage, "scanStr", module);
  context->AddFunc("scanStr", func);
}*/