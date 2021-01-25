#include "linked-list.h"
#include <iostream>

linked_list::Cell::Cell(const std::string newData) : data(newData) {}
linked_list::Cell::~Cell() { delete pointer; }

void linked_list::LinkedList::insert_cell(Cell *cell, std::string data) {
  linked_list::Cell *new_cell = new linked_list::Cell(data);
  new_cell->pointer = cell->pointer;
  cell->pointer = new_cell;
}
void linked_list::LinkedList::insert_cell_top(std::string data) {
  linked_list::Cell *new_cell = new linked_list::Cell(data);
  new_cell->pointer = head;
  head = new_cell;
}
void linked_list::LinkedList::delete_cell(Cell *cell) {
  linked_list::Cell *next = cell->pointer;
  linked_list::Cell *next_next = next->pointer;
  cell->pointer = next_next;
  next->pointer = NULL;
  delete next;
}
void linked_list::LinkedList::delete_cell_top() {
  linked_list::Cell *next = head->pointer;
  head->pointer = NULL;
  delete head;
  head = next;
}
linked_list::Cell *linked_list::LinkedList::search_cell(Cell *cell,
                                                        std::string data) {
  while (cell != NULL) {
    if (cell->data == data)
      return cell;
    cell = cell->pointer;
  }
  return NULL;
}
linked_list::LinkedList::LinkedList(Cell *newHead) : head(newHead) {}
linked_list::LinkedList::~LinkedList() { delete head; }
