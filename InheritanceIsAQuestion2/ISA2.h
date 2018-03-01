#ifndef __ISA2__
#define __ISA2__

class Book {
private:
	char * title;
	char * isbn;
	int price;

public:
	Book(const char * title, const char * isbn, const int price);
	void ShowBookInfo();
};

class EBook : public Book {
private:
	char * authKey;

public :
	EBook(const char * title, const char * isbn, const int price, const char *auth);
	void ShowEbookInfo();
};

#endif
