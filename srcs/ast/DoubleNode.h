#ifndef _DOUBLENODE_H
#define _DOUBLENODE_H

#include "Node.h"
#include <string>

class DoubleNode: public Node {
public:
	static DoubleNode* Create(double num);
	virtual NodeType getType();
	double getdouble();
	
protected:
	double value;
	DoubleNode(double num);
};

#endif