#ifndef _AVL_TREE_H_
#define _AVL_TREE_H_
#include "node.h"

class AVLTree {
    Node *root;
    public:
    AVLTree(): root(nullptr) {}
    void add_node(int x);
    friend std::ostream& operator<<(std::ostream &out, const AVLTree &tree);
};

std::ostream& operator<<(std::ostream &out, const AVLTree &tree);
#endif