#include "DoubleNode.h"

DoubleNode::DoubleNode(double num) {
	value = num;
}

DoubleNode* DoubleNode::Create(double num) {
	return new DoubleNode(num);
}

NodeType DoubleNode::getType() {
	return double_node_t;
}

double DoubleNode::getdouble() {
	return value;
}
