#include "binary-tree.h"
#include <string>

binary_tree::Node::Node(const std::string newValue) : value(newValue) {}
binary_tree::Node::Node(const std::string newValue, binary_tree::Node *newLeft,
                        binary_tree::Node *newRight)
    : left(newLeft), right(newRight), value(newValue) {}
binary_tree::Node::~Node() {
  delete right;
  delete left;
}

void binary_tree::preorder(binary_tree::Node *node,
                           binary_tree::CallBackFn cb) {
  cb(node->value);
  if (node->left != NULL) {
    preorder(node->left, cb);
  }
  if (node->right != NULL) {
    preorder(node->right, cb);
  }
}
void binary_tree::inorder(binary_tree::Node *node, binary_tree::CallBackFn cb) {
  if (node->left != NULL) {
    inorder(node->left, cb);
  }
  cb(node->value);
  if (node->right != NULL) {
    inorder(node->right, cb);
  }
}
void binary_tree::postorder(binary_tree::Node *node,
                            binary_tree::CallBackFn cb) {
  if (node->left != NULL) {
    postorder(node->left, cb);
  }
  if (node->right != NULL) {
    postorder(node->right, cb);
  }
  cb(node->value);
}
