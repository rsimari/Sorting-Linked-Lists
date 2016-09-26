// list.cpp

#include "lsort.h"
#include <memory>

List::List() {
  head = nullptr;
  size = 0;
}

List::~List() {
  //go through the list deleting each node in list
  Node *prev = head;
  while (head != nullptr) {
    head = head->next;
    delete prev;
    prev = head;
  }
}

void List::push_front(const std::string &s) {
  //insert node into front of linked list
  Node *newNode = new Node;
  newNode->string = s;
  newNode->next = head;
  try {
    int intVal = stoi(s);
    newNode->number = intVal;
  }
  catch (const std::invalid_argument &e) {
    newNode->number = 0;
  }
  head = newNode;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
