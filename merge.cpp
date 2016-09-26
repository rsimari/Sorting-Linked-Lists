// merge.cpp

#include "lsort.h"

#include <iostream>

// Prototypes

Node *msort(Node *head, CompareFunction compare);
void  split(Node *head, Node *&left, Node *&right);
Node *merge(Node *left, Node *right, CompareFunction compare);

// Implementations

bool compare_numeric(const Node* a, const Node* b) {



}

bool compare_string(const Node* a, const Node* b) {



}

void merge_sort(List &l, bool numeric) {
  Node* newHead;
  if (numeric) newHead = msort(l.head, compare_numeric);
  else newHead = msort(l.head, compare_string); 

}

Node *msort(Node *head, CompareFunction compare) {
}

void split(Node *head, Node *&left, Node *&right) {
}

Node *merge(Node *left, Node *right, CompareFunction compare) {
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
