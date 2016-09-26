// merge.cpp

#include "lsort.h"

#include <iostream>

// Prototypes

Node *msort(Node *head, CompareFunction compare);
void  split(Node *head, Node *&left, Node *&right);
Node *merge(Node *left, Node *right, CompareFunction compare);

// Implementations

bool compare_numeric(const Node* a, const Node* b) {
  return a->number > b->number;
}

bool compare_string(const Node* a, const Node* b) {
  return a->string > b->string;
}

void merge_sort(List &l, bool numeric) {
  Node* newHead;
  if (numeric) newHead = msort(l.head, compare_numeric);
  else newHead = msort(l.head, compare_string);
  l.head = newHead; 
}

Node *msort(Node *head, CompareFunction compare) {
  if (head->next == nullptr) return head;
  Node *l, *r;

  split(head, l, r);
  l = msort(l, compare);
  r = msort(r, compare);
  return merge(l, r, compare);
}

void split(Node *head, Node *&left, Node *&right) {
  //split list based on double pointer trick
  Node* first = head;
  Node* second = head;

  while ( second != nullptr && second->next != nullptr) {
    first = first->next;
    second = second->next->next;
  }


  Node *third = head;
  while (third->next != first) third = third->next;
  third->next = nullptr;

  left = head;
  right = first;

}

Node *merge(Node *left, Node *right, CompareFunction compare) {
  Node *head = (compare(left, right)) ? right : left;
  if (head == left) left = left->next;
  else right = right->next;
  Node *curr = head;


  while (left != nullptr && right != nullptr) {
    if (compare(left, right)) {
      curr->next = right;
      right = right->next;
      curr = curr->next;
    }
    else {
      curr->next = left;
      left = left->next;
      curr = curr->next;
    }

  }

  if (left != nullptr) curr->next = left;
  else curr->next = right;

  return head;

}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
