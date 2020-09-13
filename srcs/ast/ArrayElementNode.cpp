#include "ArrayElementNode.h"

ArrayElementNode::ArrayElementNode(const char* _value, int n){
  value1 = _value;
  num = n;
  type = 1;
}

ArrayElementNode::ArrayElementNode(const char* _value1, const char* _value2){
  value1 = _value1;
  value2 = _value2;
  type = 0;
}

ArrayElementNode* ArrayElementNode::Create(const char* _value, int n) {
	return new ArrayElementNode(_value, n);
}

ArrayElementNode* ArrayElementNode::Create(const char* _value1, const char* _value2) {
	return new ArrayElementNode(_value1, _value2);
}

NodeType ArrayElementNode::getType() {
	return arr_ele_node_t;
}

int ArrayElementNode::getint() {
  return num;
}

int ArrayElementNode::getArrEleType() {
  return type;
}
