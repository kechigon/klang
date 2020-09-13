#ifndef STRING_NODE_H
#define STRING_NODE_H

#include "Node.h"
#include <string>

class StringNode : public Node
{
public:
  static StringNode* Create(const char* _value);
	static StringNode* Create(std::string _value);
	virtual std::string getStr() { return value; }
	virtual NodeType getType();

protected:
	StringNode(const char* _value);
	StringNode(std::string _value);
	std::string value;
};

#endif