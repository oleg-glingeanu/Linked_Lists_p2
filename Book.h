#pragma once
#include <string>
#include "NodeOfBook.h"
#include "ListOfBooks.h"

using namespace std;

class Book {
	friend class NodeOfBook;
	friend class ListOfBooks;
private:
	int isbn;
	string title;
public:
	int getIsbn();
	string getTitle();
	void setIsbn(int a);
	void setString(string a);
};
