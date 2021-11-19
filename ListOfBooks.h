#pragma once
#include "NodeOfBook.h"
#include "Book.h"


using namespace std;

class ListOfBooks {
	friend class NodeOfBook;
	friend class Book;
private:
	NodeOfBook* head;
public:
	ListOfBooks();
	void insertBack(Book a);
	void displayList();
	int deleteMostRecent();
	~ListOfBooks();
};