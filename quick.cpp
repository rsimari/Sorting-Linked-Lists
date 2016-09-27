// quick.cpp

#include "lsort.h"

#include <iostream>

// Prototypes

Node *qsort(Node *head, CompareFunction compare);
void  partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare);
Node *concatenate(Node *left, Node *right);

// Implementations

void quick_sort(List &l, bool numeric) {
	Node *head;
	if (numeric) head = qsort(l.head, compare_numeric);
	else head = qsort(l.head, compare_string);
	l.head = head;
}

Node *qsort(Node *head, CompareFunction compare) {
	if (head->next == nullptr) return head;
	// partition
	Node *l, *r;
	partition(head, head, l, r, compare);
	l = qsort(l, compare);
	r = qsort(r, compare);
	Node *newHead = concatenate(l, r);
	return head;
}

void partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare) {
	pivot = head;
	
	return;
}

Node *concatenate(Node *left, Node *right) {

}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
