#include "linked-list.h"
#include <cassert>
#include <iostream>
#include <string>

std::string get_linked_list_content(LinkedList *linked_list) {
  Cell *cell = linked_list->head;
  std::string result = "";
  while (cell != NULL) {
    result += cell->data;
    result += " ";
    cell = cell->pointer;
  }
  return result;
}

int main() {
  std::string data = "1";
  Cell *cell = new Cell(data);
  assert(cell->data == "1");

  LinkedList *linked_list = new LinkedList(cell);
  assert(get_linked_list_content(linked_list) == "1 ");

  linked_list->insert_cell(cell, "2");
  assert(get_linked_list_content(linked_list) == "1 2 ");

  linked_list->insert_cell(cell, "3");
  assert(get_linked_list_content(linked_list) == "1 3 2 ");

  linked_list->delete_cell(cell);
  assert(get_linked_list_content(linked_list) == "1 2 ");

  linked_list->insert_cell_top("4");
  assert(get_linked_list_content(linked_list) == "4 1 2 ");

  linked_list->delete_cell_top();
  assert(get_linked_list_content(linked_list) == "1 2 ");

  Cell *found_cell = linked_list->search_cell(cell, "2");
  assert(found_cell->data == "2");

  delete linked_list;
}
