#include "idtable.h"

IDTable::IDTable()
{
    ID_stack.push_back(IDMap());
}

llvm::Value *IDTable::find(std::string idname) const
{
    for (auto p = ID_stack.rbegin(); p != ID_stack.rend(); ++p)
    {
        const IDMap &imap = *p;
        llvm::Value *pid = imap.find(idname);
        if (pid != NULL)
            return pid;
    }
    return NULL;
}

void IDTable::insert(std::string str, llvm::Value *d)
{
    IDMap &imap = ID_stack.back();
    imap.insert(str, d);
}

void IDTable::push()
{
    ID_stack.push_back(IDMap());
}

void IDTable::pop()
{
    ID_stack.pop_back();
}

int IDTable::getLevel()
{
    return ID_stack.size() - 1;
}

void IDTable::reset()
{
    ID_stack.clear();
    ID_stack.push_back(IDMap());
}