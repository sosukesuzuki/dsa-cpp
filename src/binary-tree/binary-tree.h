#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <functional>
#include <string>

struct Node {
  Node *left;
  Node *right;
  std::string value;
  Node(const std::string);
  Node(const std::string newValue, Node *left, Node *right);
  ~Node();
};

using CallBackFn = std::function<void(std::string)>;

void preorder(Node *node, CallBackFn cb);
void inorder(Node *node, CallBackFn cb);
void postorder(Node *node, CallBackFn cb);

#endif
