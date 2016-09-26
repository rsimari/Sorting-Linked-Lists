// node.cpp

#include "lsort.h"
#include <iostream>

bool node_number_compare(const Node *a, const Node *b) {
  return a->number < b->number;
}

bool node_string_compare(const Node *a, const Node *b) {
  return a->string < b->string;
}

int void_number_compare(const void *a, const void *b) {
  Node *aP = *(Node**)a;
  Node *bP = *(Node**)b;
  return (aP->number < bP->number) ? -1 : 1;
}

int void_string_compare(const void *a, const void *b) {
  Node *aP = *(Node**)a;
  Node *bP = *(Node**)b;
  return (aP->string < bP->string) ? -1 : 1;
}

void dump_node(Node *n) {
  std::cout << "String: " << n->string << " Number: " << n->number << std::endl;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
