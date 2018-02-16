#include<iostream>
#include "inline.h"

/*
#define SQAURE(X) ((X) * (X)) // 매크로함수 정의
C++ 에서는 Inline으로 대체할 수 있다.
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