#include "binary-tree.h"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std::string_literals;

int main() {
  Node *tree1 = new Node("foo"s, new Node("bar"s), new Node("baz"s));
  std::vector<std::string> values = {};
  preorder(tree1, [&values](std::string value) { values.push_back(value); });
  assert(values[0] == "foo");
  assert(values[1] == "bar");
  assert(values[2] == "baz");
  values.clear();
  delete tree1;
}
