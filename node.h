#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>
#include <algorithm>

struct Node {
  int data;
  Node *left;
  Node *right;
  int height; // высота поддерева с корнем в данной вершине

  Node(int x = 0) : data(x), left(nullptr), right(nullptr), height(1) {}
  bool update_height() {
    int hl = left ? left->height : 0;
    int hr = right ? right->height : 0;
    int old_height = height;
    height = std::max(hl, hr) + 1;
    return (old_height == height);
  };
};

std::ostream& operator<<(std::ostream &out, const Node &a);

#endif