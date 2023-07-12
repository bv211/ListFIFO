#include <iostream>
#include "List.h"

using namespace std;

int main() {

	List list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	cout << "PRINT" << endl;
	list.print();

	cout << "\nPOP" << endl;
	while (!list.empty()) {
		cout << list.pop() << endl;
	}

	return 0;
}