#include<iostream>
#include "ISA2.h"

using std::cout;
using std::endl;

int main() {

	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	
	cout << endl;

	EBook ebook("���� C++ ebook", "555-12345-890-0", 10000, "fdx9w0i8kiw");
	ebook.ShowEbookInfo();

	return 0;
}