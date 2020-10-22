#ifndef NODE_H
#define NODE_H
#include<string>

enum NodeType
{
    node_t = 0, int_node_t, double_node_t, string_node_t, arr_ele_node_t
};

class Node
{
public:
    Node();
    Node(Node* n);
    ~Node();

    void addChildren(Node* n);
    void addBrother (Node* n);
    bool isSingle();
    static Node* make_list(int num, ...);
    static Node* getList(Node* node);

    static Node* Create(Node* n);
    static Node* Create();

    Node* getNext() { return next; }
    Node* getChild() { return child; }

    std::string getTypeName();
    virtual NodeType getType();
    bool isNode();
    bool isIntNode();
    bool isDoubleNode();
    bool isStringNode();
    bool isArrayElementNode();

    bool checknext();

    void check() {check_flag = true;};
    bool ischecked() {return check_flag;};

protected:
    void init();

    Node* next;
    Node* child;
    bool havenext = false;
    bool check_flag = false;
};

#endif