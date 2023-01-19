#include "avl_tree.h"
#include <iostream>

using namespace std;

int main() {
    // Node node1(2);
    // Node node2 = node1;
    // cout << node1 << endl;
    // cout << node2 << endl;
    // node2.data = 22;
    // cout << node1 << endl;
    // cout << node2 << endl;
    // Node *node_ptr = new Node(2);
    // cout << node_ptr << endl;
    // cout << *node_ptr << endl;
    // return 0;
    // Node node2(1);
    // Node node3(3);
    // Node node4(5);
    // node1.left = &node2;
    // node1.right = &node3;
    // node3.right = &node4;
    // node3.update_height();
    // node1.update_height();
    // cout << node1 << endl;
    // cout << node2 << endl;
    // cout << node3 << endl;
    AVLTree tree;
    tree.add_node(2);
    tree.add_node(3);
    tree.add_node(5);
    tree.add_node(1);
    cout << tree << endl;
}