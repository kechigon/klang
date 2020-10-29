#ifndef IDTABLE_H
#define IDTABLE_H

#include <deque>
#include "IdMap.h"

class IDTable
{
public:
    IDTable();
    llvm::Value *find(std::string str) const;
    void insert(std::string str, llvm::Value *d);
    void push();
    void pop();
    int getLevel();
    void reset();

private:
    std::deque<IDMap> ID_stack;
};

#endif