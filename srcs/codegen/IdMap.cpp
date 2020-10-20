#include "idmap.h"

IDMap::IDMap()
{
}

IDMap::~IDMap()
{
}

id* IDMap::find(std::string str) const {
    auto p = ID_map.find(str);
    if (p != ID_map.end())
        return (*p).second;
    return NULL;
}

void IDMap::insert(std::string str,idType t, llvm::Value* d) {
  id* i = new id();
  i->type = t;
  i->data = d;
  ID_map[str] = i;
}