#include <iostream>
using namespace std;
//if you can understand linked list - doubly, queue, stacks become easy to create
 



// the building blocks of a linked list, holds the data. the blueprint.
struct Node {
	int value;
	Node* next;

	// in native C, structs don't have a constructor. In C++ its present. 
	Node(int data) {
		value = data;
		next = nullptr;
	}
};

void insert(Node*& head, int value) {
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

void remove(Node*& head, int value) {
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


void printlist(Node*& head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->value<<"->";
		temp = temp->next;
	}
}

int main() {
	Node* head = nullptr;
	insert(head, 20);
	insert(head, 30);
	insert(head, 89);
	insert(head, 56);
	insert(head, 34);
	insert(head, 22);
	remove(head, 11);
	printlist(head);
}