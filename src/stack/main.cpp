#include "stack.h"
#include <cassert>
#include <iostream>
#include <stdexcept>

int main() {
  Stack *stack = new Stack(10);
  assert(stack->size == 10);
  assert(stack->top == 0);
  stack->push("foo");
  stack->push("bar");
  stack->push("baz");
  assert(stack->pop() == "baz");
  assert(stack->pop() == "bar");
  assert(stack->pop() == "foo");
  delete stack;

  Stack *small_stack = new Stack(0);
  try {
    small_stack->push("bar");
  } catch (std::runtime_error error) {
    std::string message = error.what();
    assert(message == "Stack overflow");
  }
  try {
    small_stack->pop();
  } catch (std::runtime_error error) {
    std::string message = error.what();
    assert(message == "Stack underflow");
  }
  delete small_stack;
}
