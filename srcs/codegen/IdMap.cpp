#include "idmap.h"

IDMap::IDMap()
{
}

IDMap::~IDMap()
{
}

llvm::Value *IDMap::find(std::string str) const
{
  auto p = ID_map.find(str);
  if (p != ID_map.end())
    return (*p).second;
  return NULL;
}

void IDMap::insert(std::string str, llvm::Value *d)
{
  ID_map[str] = d;
}