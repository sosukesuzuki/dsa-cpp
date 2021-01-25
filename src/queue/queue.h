#ifndef QUEUE_H
#define QUEUE_H
#include <string>

namespace queue {
struct Queue {
private:
  std::string *QUEUE;
  int rear;
  int front;
  int size;

public:
  void enqueue(std::string data);
  std::string dequeue();
  bool empty();
  Queue(const int newSize);
  ~Queue();
};
} // namespace queue

#endif
