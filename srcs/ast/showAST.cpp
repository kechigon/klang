#include <iostream>
#include <queue>
#include "nodes.h"

void showAST(Node* node){
  NodeType nt = node->getType();
  switch (nt)
  {
    case node_t: showAST(node->getChild()); break;
    case int_node_t: std::cout << node->getint() << std::endl; break;
    case string_node_t: std::cout << node->getStr() << std::endl; break;
    case double_node_t: std::cout << node->getdouble() << std::endl; break;
    case arr_ele_node_t: if(node->getArrEleType())std::cout << node->getStr1() << "." << node->getint() << std::endl;else std::cout << node->getStr1() << "." << node->getStr2() << std::endl; break;
    default: break;
  }
  std::queue<Node*> bros;
  Node *now = node;
  while(now->checknext()){
    bros.push(now->getNext());
    now = now->getNext();
  }
  while(!bros.empty()){
    NodeType nt = bros.front()->getType();
    switch (nt)
    {
      case node_t: showAST(bros.front()->getChild()); break;
      case int_node_t: std::cout << bros.front()->getint() << std::endl; break;
      case string_node_t: std::cout << bros.front()->getStr() << std::endl; break;
      case double_node_t: std::cout << bros.front()->getdouble() << std::endl; break;
      case arr_ele_node_t: if(bros.front()->getArrEleType())std::cout << bros.front()->getStr1() << "." << bros.front()->getint() << std::endl;else std::cout << bros.front()->getStr1() << "." << bros.front()->getStr2() << std::endl; break;
      default: break;
    }
    bros.pop();
  }
}