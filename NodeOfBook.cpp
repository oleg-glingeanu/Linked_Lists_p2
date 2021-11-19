#include "NodeOfBook.h"

NodeOfBook::NodeOfBook(){
	next = nullptr;
	theBook.setString("First Book");
	theBook.setIsbn(1);
}