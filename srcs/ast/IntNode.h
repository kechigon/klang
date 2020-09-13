#ifndef _INTNODE_H
#define _INTNODE_H

#include "Node.h"

class IntNode: public Node {
public: 
  static IntNode* Create(int num);
	virtual NodeType getType();
	virtual int getint();
	
protected:
	IntNode(int num);
	int value;
};

#endif