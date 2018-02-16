#include<iostream>
#include "inline.h"

/*
#define SQAURE(X) ((X) * (X)) // ��ũ���Լ� ����
C++ ������ Inline���� ��ü�� �� �ִ�.
*/

int main() {
	using std::cout;
	using std::endl;

	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
}

inline int SQUARE(int x)
{
	return x * x;
}