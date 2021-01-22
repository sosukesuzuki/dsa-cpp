#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>

struct Cell {
  std::string data;
  Cell *pointer;
  Cell(const std::string newData);
  ~Cell();
};

struct LinkedList {
  Cell *head;
  void insert_cell(Cell *pointer, std::string data);
  void insert_cell_top(std::string data);
  void delete_cell(Cell *pointer);
  void delete_cell_top();
  Cell *search_cell(Cell *pointer, std::string data);
  LinkedList(Cell *newHead);
  ~LinkedList();
};

#endif
