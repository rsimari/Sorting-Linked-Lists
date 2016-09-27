// quick.cpp

#include "lsort.h"

#include <iostream>

// Prototypes
bool quick_compare_numeric(const Node* a, const Node* b) {
  return a->number > b->number;
}

bool quick_compare_string(const Node* a, const Node* b) {
  return a->string > b->string;
}


Node *qsort(Node *head, CompareFunction compare);
void  partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare);
Node *concatenate(Node *left, Node *right);

// Implementations

void quick_sort(List &l, bool numeric) {
  Node* newHead;
  if (numeric) newHead = qsort(l.head, quick_compare_numeric);
  else newHead = qsort(l.head, quick_compare_string);
  l.head = newHead;
}

Node *qsort(Node *head, CompareFunction compare) {
  if (head == nullptr || head->next == nullptr) return head;

  Node *l = nullptr, *r = nullptr;
  //partition
  partition(head, head, l, r, compare);
  l = qsort(l, compare);
  Node *temp;

  if (l == nullptr) {
    l = r;
    temp = r->next;
    l->next = nullptr;
  }
  else temp = r;
  r = qsort(temp, compare);

  Node* newHead = concatenate(l, r);
  return newHead;
}

void partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare) {
  Node* curr = head;

  while (curr != nullptr && curr->next != nullptr) {
    if (compare(pivot, curr->next)) {
      Node* temp = curr->next;
      curr->next = curr->next->next;
      temp->next = head;
      head = temp;
      if (head->next == pivot) head->next = nullptr;
    }
    else curr = curr->next;
  }

  right = pivot;
  left = head;
  if (left == pivot) left = nullptr;

}

Node *concatenate(Node *left, Node *right) {
  Node* curr = left;
  while (curr != nullptr && curr->next != nullptr) curr = curr->next;
  if (curr != nullptr) curr->next = right;
  else left = right;

  return left;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
