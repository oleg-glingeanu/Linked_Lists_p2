#include "Book.h"
#include <iostream>
#include <string>

using namespace std;


Book::Book() {
	cout << "Making 1 book for da list\n";
	int isbn = 0;
	string title = "title";
}

void Book::setString(string a) {
	title = a;
}

void Book::setIsbn(int a) {
	isbn = a;
}

string Book::getTitle() {
	return title;
}

int Book::getIsbn() {
	return isbn;
}

Book::~Book() {
	cout << "Deleteing 1 book for da list\n";
}