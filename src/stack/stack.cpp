#include "stack.h"
#include <iostream>
#include <stdexcept>
#include <string>

stack::Stack::Stack(const int newSize)
    : size(newSize), top(0), STACK(new std::string[newSize]) {}
stack::Stack::~Stack() { delete[] STACK; }
void stack::Stack::push(std::string data) {
  if (top > size - 1)
    throw std::runtime_error("Stack overflow");
  STACK[top] = data;
  top++;
}
std::string stack::Stack::pop() {
  if (top == 0)
    throw std::runtime_error("Stack underflow");
  top--;
  return STACK[top];
}
