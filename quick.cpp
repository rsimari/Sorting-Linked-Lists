// quick.cpp

#include "lsort.h"

#include <iostream>

// Prototypes

Node *qsort(Node *head, CompareFunction compare);
void  partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare);
Node *concatenate(Node *left, Node *right);

// Implementations

void quick_sort(List &l, bool numeric) {

}

Node *qsort(Node *head, CompareFunction compare) {
	if (head->next == nullptr || head->next->next == nullptr) return head;
	// call partition here
	Node *pivot = head;
	return head;
}

void partition(Node *head, Node *pivot, Node *&left, Node *&right, CompareFunction compare) {
	pivot = head;
	while (left != right) {
		return;
	}
	return;
}

Node *concatenate(Node *left, Node *right) {
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
