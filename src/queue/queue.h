#ifndef QUEUE_H
#define QUEUE_H
#include <string>

struct Queue {
private:
  std::string *QUEUE;
  int rear;
  int front;
  int size;

public:
  void enqueue(std::string data);
  std::string dequeue();
  Queue(const int newSize);
  ~Queue();
};

#endif
