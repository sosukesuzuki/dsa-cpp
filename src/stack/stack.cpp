#include "stack.h"
#include <iostream>
#include <stdexcept>
#include <string>

namespace stack {
Stack::Stack(const int newSize)
    : size(newSize), top(0), STACK(new std::string[newSize]) {}
Stack::~Stack() { delete[] STACK; }
void Stack::push(std::string data) {
  if (top > size - 1)
    throw std::runtime_error("Stack overflow");
  STACK[top] = data;
  top++;
}
std::string Stack::pop() {
  if (top == 0)
    throw std::runtime_error("Stack underflow");
  top--;
  return STACK[top];
}
} // namespace stack
