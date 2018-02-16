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
	�����ڸ� �̿��� ������ �ݵ�� ������ �̿��Ͽ� �ʱ�ȭ�ؾ��ϱ� ������ ����� �Ű������� �� �� ����.
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
	�����ڸ� �̿��ؼ� ���� ������ ��� �Լ��� ȣ�� ������ ���� ������ ����
	�ٲ���� �ִٴ� ���� �� �� ����.
	�����ڸ� �̿��� ��� const Ű���带 �̿��Ͽ� ���� �������� ������ ������ִ� ���� ����.
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
