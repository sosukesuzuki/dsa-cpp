#include "linked-list.h"
#include <string>

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

  delete linked_list;
}
