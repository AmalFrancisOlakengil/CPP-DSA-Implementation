#include <iostream>
#include "Node.h"
using namespace std;



inline void insert_doubly_end(Node*& head, Node*& tail, int data) {
	Node* newnode = new Node(data);
	if (head == nullptr) {
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->prev = tail;
		tail->next = newnode;
		tail = tail->next;
	}

}

inline void delete_doubly_front(Node*& head) {
	if (head == nullptr) {
		cout << "Nothing to delete" << endl;
	}
	else {
		Node* temp = head;
		head = head->next;
		head->prev = nullptr;
		delete temp;
	}
}

inline void printq(Node*& head) {
	if (head == nullptr) {
		cout << "Empty"<<endl;
	}
	else {
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->value << "->";
			temp = temp->next;
		}
	}
}