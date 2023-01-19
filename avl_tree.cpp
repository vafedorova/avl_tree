#include "avl_tree.h"

using namespace std;

Node *add_node_r(Node *root, int x) {
    if (root == nullptr) {
        root = new Node(x);
        return root;
    }
    if (x < root->data) {
        root->left = add_node_r(root->left, x);
        root->left->update_height();
    }
    else { // if (x > root->data) { 
        root->right = add_node_r(root->right, x);
        root->right->update_height();
    }
    root->update_height();
    return root;
}

void AVLTree::add_node(int x) {
    root = add_node_r(root, x);
}
  
std::ostream &left_root_right(const Node *root, std::ostream &out) {
    if (root == nullptr) {
        return out;
    }
    left_root_right(root->left, out);
    out << *root << "\n";
    left_root_right(root->right, out);
    return out;
}

std::ostream& operator<<(std::ostream &out, const AVLTree &tree) {
    return left_root_right(tree.root, out);
}

// Node *left_root_right_search(const Node *root, int x) {
//     if (root == nullptr) {
//         return;
//     }
//     if ()
//     left_root_right(root->left);
//     cout << root->data << "\n";
//     left_root_right(root->right);
// }

// Node AVLTree::search_node(int x) {
//     return left_root_right_search(root, x);
// }