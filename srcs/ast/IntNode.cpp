#include "IntNode.h"
#include <stdio.h>

IntNode* IntNode::Create(int num) {
	return new IntNode(num);
}

IntNode::IntNode(int num) {
	value = num;
}

NodeType IntNode::getType() {
	return int_node_t;
}

int IntNode::getint() {
	return value;
}