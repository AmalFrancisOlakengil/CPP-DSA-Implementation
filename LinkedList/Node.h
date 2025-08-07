#pragma once

// the building blocks of a linked list, holds the data. the blueprint.
struct Node {
	int value;
	Node* next;
	Node* prev;

	// in native C, structs don't have a constructor. In C++ its present. 
	Node(int data) {
		value = data;
		next = nullptr;
		prev = nullptr;
	}

};

