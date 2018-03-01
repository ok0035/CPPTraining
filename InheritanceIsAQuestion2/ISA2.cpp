#include "ISA2.h"
#include<iostream>

using std::cout;
using std::endl;

Book::Book(const char * title, const char * isbn, const int price)
{
	this->title = new char[strlen(title) + 1];
	this->isbn = new char[strlen(isbn) + 1];
	this->price = price;

	strcpy_s(this->title, strlen(title) + 1, title);
	strcpy_s(this->isbn, strlen(isbn) + 1, isbn);
	
}

void Book::ShowBookInfo()
{
	cout << "제목 : " << title << endl;
	cout << "ISBN : " << isbn << endl;
	cout << "가격 : " << price << endl;
}

EBook::EBook(const char * title, const char * isbn, const int price, const char * auth)
	: Book(title, isbn, price)
{
	this->authKey = new char[strlen(auth) + 1];
	strcpy_s(this->authKey, strlen(auth) + 1, auth);
}

void EBook::ShowEbookInfo()
{
	ShowBookInfo();
	cout << "인증키 : " << authKey << endl;
}
