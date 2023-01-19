#include "node.h"
#include <string>

std::ostream& operator<<(std::ostream &out, const Node &a) {
  out << a.data << " (l: " << (a.left ? std::to_string(a.left->data) : "х") << "; r: " 
      << (a.right ? std::to_string(a.right->data) : "х") << "), h = " << a.height;
  return out;
}