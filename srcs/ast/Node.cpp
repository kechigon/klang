#include "Node.h"
#include "nodes.h"
#include <stdarg.h>
#include <stdio.h>
#include <iostream>

void Node::init()
{
    next = child = NULL;
}

Node::Node()
{
    init();
}

Node::Node(Node *n)
{
    init();
    addChildren(n);
}

Node::~Node()
{
}

Node *Node::Create(Node *n)
{
    return new Node(n);
}

Node *Node::Create()
{
    return new Node();
}

void Node::addChildren(Node *n)
{
    if (child == NULL)
    {
        child = n;
    }
    else
    {
        child->addBrother(n);
    }
}

void Node::addBrother(Node *n)
{
    havenext = true;
    Node *p = this;
    while (p->next != NULL)
    {
        p = p->next;
        p->havenext = true;
    }
    p->next = n;
}

NodeType Node::getType()
{
    return node_t;
}

bool Node::isSingle()
{
    return next == NULL;
}

Node *Node::make_list(int num, ...)
{
    va_list argp;
    Node *para = NULL;
    Node *ans = NULL;
    va_start(argp, num);
    for (int i = 0; i < num; ++i)
    {
        para = va_arg(argp, Node *);
        if (!para->isSingle())
            para = new Node(para);
        if (ans == NULL)
            ans = para;
        else
            ans->addBrother(para);
    }
    va_end(argp);
    return ans;
}

Node *Node::getList(Node *node)
{
    return new Node(node);
}

bool Node::isNode()
{
    return getType() == node_t;
}

bool Node::isDoubleNode()
{
    return getType() == double_node_t;
}

bool Node::isStringNode()
{
    return getType() == string_node_t;
}

bool Node::isArrayElementNode()
{
    return getType() == arr_ele_node_t;
}

std::string Node::getTypeName()
{
    switch (getType())
    {
    case node_t:
        return "Node";
    case string_node_t:
        return "StringNode";
    case double_node_t:
        return "doubleNode";
    case arr_ele_node_t:
        return "ArrEleNode";
    }
    return "";
}

bool Node::checknext()
{
    return havenext;
}