#include "StringNode.h"

StringNode::StringNode(const char* _value){
  value = _value;
}

StringNode::StringNode(std::string _value){
  value = _value;
}

StringNode* StringNode::Create(const char* _value) {
	return new StringNode(_value);
}

StringNode* StringNode::Create(std::string _value) {
	return new StringNode(_value);
}

NodeType StringNode::getType() {
	return string_node_t;
}

bool StringNode::isLiteral() {
	return Literal;
}

void StringNode::setIsLiteral() {
	Literal = true;
}

