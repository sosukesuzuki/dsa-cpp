#include "queue.h"
#include <stdexcept>
#include <string>

void queue::Queue::enqueue(std::string data) {
  if (rear > size - 1) {
    throw std::runtime_error("Queue overflow");
  }
  QUEUE[rear] = data;
  rear++;
}
std::string queue::Queue::dequeue() {
  if (rear == front) {
    throw std::runtime_error("Queue underflow");
  }
  std::string result = QUEUE[front];
  front++;
  return result;
}
bool queue::Queue::empty() { return rear == front; }
queue::Queue::Queue(const int newSize)
    : QUEUE(new std::string[newSize]), rear(0), front(0), size(newSize) {}
queue::Queue::~Queue() { delete[] QUEUE; }
