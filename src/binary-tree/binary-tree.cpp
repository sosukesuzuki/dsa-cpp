#include "binary-tree.h"
#include <queue>
#include <string>

namespace binary_tree {
Node::Node(const std::string newValue) : value(newValue) {}
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
void inorder(Node *node, CallBackFn cb) {
  if (node->left != NULL) {
    inorder(node->left, cb);
  }
  cb(node->value);
  if (node->right != NULL) {
    inorder(node->right, cb);
  }
}
void postorder(Node *node, CallBackFn cb) {
  if (node->left != NULL) {
    postorder(node->left, cb);
  }
  if (node->right != NULL) {
    postorder(node->right, cb);
  }
  cb(node->value);
}
void breadth_first_search(Node *root_node, CallBackFn cb) {
  std::queue<Node *> queue;
  queue.push(root_node);
  while (!queue.empty()) {
    Node *node = queue.front();
    queue.pop();
    cb(node->value);
    if (node->left) {
      queue.push(node->left);
    }
    if (node->right) {
      queue.push(node->right);
    }
  }
}
} // namespace binary_tree
