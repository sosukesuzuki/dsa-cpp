#include "linked-list.h"
#include <iostream>

Cell::Cell(const std::string newData) : data(newData) {}
Cell::~Cell() { delete pointer; }

void LinkedList::insert_cell(Cell *cell, std::string data) {
  Cell *new_cell = new Cell(data);
  new_cell->pointer = cell->pointer;
  cell->pointer = new_cell;
}
void LinkedList::insert_cell_top(std::string data) {
  Cell *new_cell = new Cell(data);
  new_cell->pointer = head;
  head = new_cell;
}
void LinkedList::delete_cell(Cell *cell) {
  Cell *next = cell->pointer;
  Cell *next_next = next->pointer;
  cell->pointer = next_next;
  next->pointer = NULL;
  delete next;
}
void LinkedList::delete_cell_top() {}
Cell *LinkedList::search_cell(Cell *cell, std::string data) {
  while (cell != NULL) {
    if (cell->data == data)
      return cell;
    cell = cell->pointer;
  }
  return NULL;
}
LinkedList::LinkedList(Cell *newHead) : head(newHead){};
LinkedList::~LinkedList() { delete head; }

void display_linked_list(LinkedList *linked_list) {
  Cell *cell = linked_list->head;
  while (cell != NULL) {
    std::cout << cell->data << ", ";
    cell = cell->pointer;
  }
  std::cout << std::endl;
}
