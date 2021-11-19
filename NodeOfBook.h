#pragma once
#include "Book.h"
#include "ListOfBooks.h"
#include <string>


class NodeOfBook {
	friend class Book;

private:
	Book theBook;
	NodeOfBook* next;
public:
	NodeOfBook();
};