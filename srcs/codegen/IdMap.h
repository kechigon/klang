#ifndef IDMAP_H
#define IDMAP_H

#include <map>
#include <string>
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

class IDMap
{
public:
    IDMap();
    ~IDMap();
    llvm::Value *find(std::string str) const;
    void insert(std::string str, llvm::Value *d);

private:
    std::map<std::string, llvm::Value *> ID_map;
};

#endif