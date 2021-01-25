#include "binary-tree.h"
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std::string_literals;

int main() {
  Node *tree = new Node("foo"s, new Node("bar"s), new Node("baz"s));

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

  delete tree;
}
