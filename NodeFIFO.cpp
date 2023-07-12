#include <iostream>
#include "List.h"

int main() {

	List list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	list.print();

	while (!list.empty()) {
		std::cout << list.pop() << std::endl;
	}

	return 0;
}