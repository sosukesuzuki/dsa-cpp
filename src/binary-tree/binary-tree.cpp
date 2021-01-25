#include "binary-tree.h"
#include <string>

Node::Node(const std::string newValue): value(newValue) {}
Node::Node(const std::string newValue, Node *newLeft, Node *newRight)
    : left(newLeft), right(newRight), value(newValue) {}
Node::~Node() {
  delete right;
  delete left;
}

void preorder(Node *node, CallBackFn cb) {
  cb(node->value);
  if (node->left != NULL) {
    preorder(node->left, cb);
  }
  if (node->right != NULL) {
    preorder(node->right, cb);
  }
}
void inorder(Node *node, CallBackFn cb) {}
void postorder(Node *node, CallBackFn cb) {}
