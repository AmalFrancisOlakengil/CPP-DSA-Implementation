#include <iostream>
#include "Node.h"
using namespace std;

// a stack only needs a singly linked list


inline void push(Node*& head, int value) {
	Node* NewNode = new Node(value);
	if (head == nullptr) {
		head = NewNode;
	}
	else {
		NewNode->next = head;
		head = NewNode;
	}
}


inline void pop(Node*& head) {
	if (head == nullptr) {
		cout << "The stack is empty";
	}
	else {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

inline void print(Node*& head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->value << "->";
		temp = temp->next;
	}
}

inline void top(Node*& head) {
	cout << head->value<<endl;
}
