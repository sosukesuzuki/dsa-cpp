#include "binary-tree.h"
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std::string_literals;

int main() {
  binary_tree::Node *tree = new binary_tree::Node(
      "foo"s, new binary_tree::Node("bar"s), new binary_tree::Node("baz"s));

  std::vector<std::string> values = {};

  preorder(tree, [&values](std::string value) { values.push_back(value); });
  assert(values[0] == "foo");
  assert(values[1] == "bar");
  assert(values[2] == "baz");
  values.clear();

  inorder(tree, [&values](std::string value) { values.push_back(value); });
  assert(values[0] == "bar");
  assert(values[1] == "foo");
  assert(values[2] == "baz");
  values.clear();

  postorder(tree, [&values](std::string value) { values.push_back(value); });
  assert(values[0] == "bar");
  assert(values[1] == "baz");
  assert(values[2] == "foo");
  values.clear();

  breadth_first_search(
      tree, [&values](std::string value) { values.push_back(value); });
  assert(values[0] == "foo");
  assert(values[1] == "bar");
  assert(values[2] == "baz");
  values.clear();

  delete tree;
}
