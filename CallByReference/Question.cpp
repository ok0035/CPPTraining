#include "Question.h"
#include<iostream>

int main() {

	using std::cout;
	using std::endl;

	int num = 3, num2 = 4;
	int *ptr1, *ptr2;

	ptr1 = &num;
	ptr2 = &num2;

	Plus(num);
	Change(&num);

	cout << num << endl;

	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	/*
	참조자를 이용할 때에는 반드시 변수를 이용하여 초기화해야하기 때문에 상수를 매개변수로 줄 수 없다.
	*/
	//SwapByRef2(23, 35); 

}

void Plus(int &num)
{
	num++;
}

void Change(int * num)
{
	*num = -*num;
}

void SwapByRef2(int & ref1, int & ref2)
{
	/*
	참조자를 이용해서 값을 변경할 경우 함수의 호출 문장을 보고 변수의 값이
	바뀔수도 있다는 것을 알 수 없다.
	참조자를 이용할 경우 const 키워드를 이용하여 값을 변경하지 않음을 명시해주는 것이 좋다.
	*/
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void SwapPointer(int * ptr1, int * ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
