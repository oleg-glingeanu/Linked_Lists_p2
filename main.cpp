#include "ListOfBooks.h"
#include <iostream>

using namespace std;

int main() {
	ListOfBooks list;
	Book a;
	a.setIsbn(2);
	a.setString("Second book");
	Book b;
	b.setIsbn(3);
	b.setString("Third Book");
	list.insertBack(a);
	list.insertBack(b);
	list.displayList();

	return 0;
}