#include "Question.h"
#include<iostream>

int main() {

	using std::cout;
	using std::endl;

	int num = 3, num2 = 4;
	int *ptr1, *ptr2;

	const int refNum = 12; //문제 02-2
	const int* refNumPtr = &refNum;
	const int &ref = *refNumPtr;

	ptr1 = &num;
	ptr2 = &num2;

	/*
	ptr을 참조하는 참조자를 선언하여 함수 내에서 포인터 변수에 접근할 수 있도록함.
	참조자를 사용하면 값의 변경 여부를 알 수 없으므로 포인터를 이용해서 바꾸어도 가능할 듯.
	*/
	int* &refPtr1 = ptr1;
	int* &refPtr2 = ptr2;
	
	//더블 포인터 이용
	int** dPtr1 = &ptr1;
	int** dPtr2 = &ptr2;

	/*더블포인터 초기화 ;; 안해줘도 된다.*/
	//*dPtr1 = ptr1;
	//*dPtr2 = ptr2;
	//**dPtr1 = *ptr1;
	//**dPtr2 = *ptr2;
	
	Plus(num);
	Change(&num);
	
	cout << "Plus + Change 함수 적용(num) : " << num << endl;

	//SwapPointer(ptr1, ptr2); // 참조자를 이용한 Swap
	SwapPointer2(dPtr1, dPtr2); // 더블포인터를 이용한 Swap
	cout << "SwapPointer 결과" << endl << "*ptr1(ptr2를 가르킴(4)) : " << *ptr1 << endl;
	cout << "*ptr2(ptr1을 가르킴(-4)) : " << *ptr2 << endl;

	cout << "&ref 출력 : " << ref << endl;

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

//참조자를 이용하여 포인터가 가르키는 위치는 변경해줌.
void SwapPointer(int* &ptr1, int* &ptr2)
{
	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

//포인터를 이용해서 포인터가 가르키는 포인터를 바꾸어줌.
void SwapPointer2(int** dPtr1, int** dPtr2)
{
	int* temp = *dPtr1; // *dPtr1에는 ptr1가 가르키는 곳의 주소가 저장된다.
	temp = *dPtr1;
	*dPtr1 = *dPtr2; // *dPtr1(ptr1이 가르키는 곳의 주소) 에 *dPtr2(ptr2가 가르키는 곳의 주소)를 덧씌운다.
	*dPtr2 = temp; // *dPtr2에는 temp에 저장되어 있는 *dPtr1의 값을 넣어준다.

	/*그 결과 ptr1, ptr2 가 가르키는 곳이 교차되었다.*/
}

