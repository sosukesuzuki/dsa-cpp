#ifndef STACK_H
#define STACK_H

#include <array>
#include <string>
#include <vector>

namespace stack {
struct Stack {
  int size;
  int top;
  std::string *STACK;
  void push(std::string data);
  std::string pop();
  Stack(const int newSize);
  ~Stack();
};
} // namespace stack

#endif
