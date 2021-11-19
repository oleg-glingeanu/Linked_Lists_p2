#include "ListOfBooks.h"
#include <iostream>

using namespace std;

ListOfBooks::ListOfBooks():head(NULL){
	cout << "Linked List constructor\n";


}

ListOfBooks::~ListOfBooks(){


	cout << "Linked List Deconstructor\n";

}

void ListOfBooks::insertBack(Book a) {
	NodeOfBook* n = new NodeOfBook;
	n->next = NULL;
	n->theBook = a;
	NodeOfBook* tempPtr;

	if (head != NULL) {
		tempPtr = head;
		while (tempPtr != NULL) {
			tempPtr = tempPtr->next;
		}

		tempPtr->next = n;
	}

	else {
		head = n;
	}

}

int ListOfBooks::deleteMostRecent() {
	NodeOfBook* deletePntr = NULL;
	NodeOfBook* tempPtr;
	NodeOfBook* crntPtr;
	tempPtr = head;
	crntPtr = head;
	if (head == NULL) {
		cout << "Linked List is empty";
		delete deletePntr;
		return 0;
	}
	while (crntPtr != NULL) {
		tempPtr = crntPtr;
		crntPtr = crntPtr->next;
	}
	deletePntr = crntPtr;
	crntPtr = crntPtr->next;
	tempPtr->next = crntPtr;
	delete deletePntr;

}

void ListOfBooks::displayList() {
	NodeOfBook* crntPtr = head;

	while (crntPtr != NULL)
	{
		cout << crntPtr->theBook.getTitle() << endl;
		crntPtr = crntPtr->next;
	}
}