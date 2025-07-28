#include <iostream>
#include "Node.h"
using namespace std;
//if you can understand linked list - doubly, queue, stacks become easy to create
 

inline void insert(Node*& head, int value) {
	Node* NewNode = new Node(value);
	if (!head) {
		head = NewNode;
		return;
	}
	Node* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = NewNode;
}

inline void remove(Node*& head, int value) {
	if (!head) {
		cout << "the list is empty";
		return;
	}


	Node* temp = head;
	if (temp->value == value) {
		head = temp->next;
		delete temp;
		return;
	}


	Node* prev = temp;
	while (temp != nullptr and temp->value != value) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == nullptr) {
		cout<<"Value not found"<<endl;
		return;
	}
	prev->next = temp->next;
	delete temp;
}


inline void printlist(Node*& head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->value<<"->";
		temp = temp->next;
	}
}

