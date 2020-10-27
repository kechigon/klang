#include <iostream>
#include <queue>
#include "nodes.h"

void showAST(Node* node){
  NodeType nt = node->getType();
  switch (nt)
  {
    case node_t: showAST(node->getChild()); break;
    case string_node_t: std::cout << ((StringNode*)node)->getStr() << std::endl; break;
    case double_node_t: std::cout << ((DoubleNode*)node)->getdouble() << std::endl; break;
    case arr_ele_node_t: if(((ArrayElementNode*)node)->getArrEleType())std::cout << ((ArrayElementNode*)node)->getStr1() << "." << ((ArrayElementNode*)node)->getint() << std::endl;else std::cout << ((ArrayElementNode*)node)->getStr1() << "." << ((ArrayElementNode*)node)->getStr2() << std::endl; break;
    default: break;
  }
  std::queue<Node*> bros;
  Node *now = node;
  while(now->checknext()){
    bros.push(now->getNext());
    now = now->getNext();
  }
  while(!bros.empty()){
    nt = bros.front()->getType();
    switch (nt)
    {
      case node_t: showAST(bros.front()->getChild()); break;
      case string_node_t: std::cout << ((StringNode*)bros.front())->getStr() << std::endl; break;
      case double_node_t: std::cout << ((DoubleNode*)bros.front())->getdouble() << std::endl; break;
      case arr_ele_node_t: if(((ArrayElementNode*)bros.front())->getArrEleType())std::cout << ((ArrayElementNode*)bros.front())->getStr1() << "." << ((ArrayElementNode*)bros.front())->getint() << std::endl;else std::cout << ((ArrayElementNode*)bros.front())->getStr1() << "." << ((ArrayElementNode*)bros.front())->getStr2() << std::endl; break;
      default: break;
    }
    bros.pop();
  }
}