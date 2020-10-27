#ifndef ARRAY_ELEMENT_NODE_H
#define ARRAY_ELEMENT_NODE_H

#include "Node.h"
#include <string>

class ArrayElementNode : public Node
{
public:
  static ArrayElementNode* Create(const char* _value, double n);
	static ArrayElementNode* Create(const char* _value1, const char* _value2);
	std::string getStr1() { return value1; }
	std::string getStr2() { return value2; }
  int getint();
	virtual NodeType getType();
	int getArrEleType();

protected:
	ArrayElementNode(const char* _value, double n);
	ArrayElementNode(const char* _value1, const char* _value2);
	std::string value1;
	std::string value2;
  int num;
	int type;
};

#endif