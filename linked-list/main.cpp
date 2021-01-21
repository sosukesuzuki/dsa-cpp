#include "linked-list.h"
#include <string>
#include <iostream>

int main() {
  std::string data = "1";
  Cell *cell = new Cell(data);

  LinkedList *linked_list = new LinkedList(cell);
  display_linked_list(linked_list);
  linked_list->insert_cell(cell, "2");
  display_linked_list(linked_list);
  linked_list->insert_cell(cell, "3");
  display_linked_list(linked_list);
  linked_list->delete_cell(cell);
  display_linked_list(linked_list);
  Cell *found_cell = linked_list->search_cell(cell, "2");
  if (found_cell != NULL) {
    std::cout << "Found cell " << found_cell->data << std::endl;
  } else {
    std::cout << "Cell Not Found" << std::endl;
  }

  delete linked_list;
}
