#include "LinkedList-singly.h"
#include "stack.h"
#include <iostream>
#include "doubly.h"

int main() {
	Node* head = nullptr;
	Node* tail = nullptr;
	insert_doubly_end(head, tail, 23);
	insert_doubly_end(head, tail, 29);
	insert_doubly_end(head, tail, 24);
	insert_doubly_end(head, tail, 290);
	insert_doubly_end(head, tail, 45);
	delete_doubly_front(head);
	printq(head);
}





