// stl.cpp

#include "lsort.h"
#include <algorithm>
#include <vector>
#include <iostream>

void stl_sort(List &l, bool numeric) {
  Node* temp = l.head;
  std::vector<Node*> vec;

  while (temp != nullptr) {
    vec.push_back(temp);
    temp = temp->next;
  }
  if (numeric) std::sort(vec.begin(), vec.end(), node_number_compare);
  else std::sort(vec.begin(), vec.end(), node_string_compare);

  l.head = vec[0];
  temp = l.head;
  for (std::vector<Node*>::iterator it = vec.begin()+1; it != vec.end(); it++) {
    temp->next = (*it);
    temp = temp->next;
  }
  temp->next = nullptr;

}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
