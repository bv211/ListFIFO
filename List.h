#pragma once
#include <iostream>
#include "Node.h"

class List {
	Node* _first{ nullptr };
	Node* _last{ nullptr };

public:
	List() = default;

	~List() {
		Node* current = _first;

		while (current != nullptr) {
			auto* next = current->next;
			delete_node(current);
			current = next;
		}
	}

	bool empty() {
		return _first == nullptr;
	}

	void push_back(int value) {
		auto* node = create_node(value);

		if (empty()) {
			_first = node;
			_last = node;
			return;
		}

		_last->next = node;
		_last = node;
	}

	int pop() {
		if (empty()) throw std::bad_alloc();

		auto value = _first->value;
		auto* next = _first->next;

		delete_node(_first);
		_first = next;

		return value;
	}

	void print() {
		Node* current = _first;

		while (current != nullptr) {
			std::cout << current->value << std::endl;
			current = current->next;
		}
	}

private:
	Node* create_node(int value) {
		return new Node{ value };
	}

	void delete_node(Node*& node) {
		delete node;
	}
};
