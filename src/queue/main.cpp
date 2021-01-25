#include "queue.h"
#include <cassert>
#include <stdexcept>

int main() {
  queue::Queue *queue = new queue::Queue(10);
  queue->enqueue("foo");
  queue->enqueue("bar");
  queue->enqueue("baz");
  assert(queue->dequeue() == "foo");
  assert(queue->dequeue() == "bar");
  assert(queue->dequeue() == "baz");
  delete queue;

  queue::Queue *small_queue = new queue::Queue(0);
  try {
    small_queue->enqueue("foo");
  } catch (std::runtime_error error) {
    std::string message = error.what();
    assert(message == "Queue overflow");
  }
  try {
    small_queue->dequeue();
  } catch (std::runtime_error error) {
    std::string message = error.what();
    assert(message == "Queue underflow");
  }
  delete small_queue;
}
