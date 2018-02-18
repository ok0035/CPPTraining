#include "Question.h"
#include<iostream>

int main() {

	using std::cout;
	using std::endl;

	int num = 3, num2 = 4;
	int *ptr1, *ptr2;

	const int refNum = 12; //���� 02-2
	const int* refNumPtr = &refNum;
	const int &ref = *refNumPtr;

	ptr1 = &num;
	ptr2 = &num2;

	/*
	ptr�� �����ϴ� �����ڸ� �����Ͽ� �Լ� ������ ������ ������ ������ �� �ֵ�����.
	�����ڸ� ����ϸ� ���� ���� ���θ� �� �� �����Ƿ� �����͸� �̿��ؼ� �ٲپ ������ ��.
	*/
	int* &refPtr1 = ptr1;
	int* &refPtr2 = ptr2;
	
	//���� ������ �̿�
	int** dPtr1 = &ptr1;
	int** dPtr2 = &ptr2;

	/*���������� �ʱ�ȭ ;; �����൵ �ȴ�.*/
	//*dPtr1 = ptr1;
	//*dPtr2 = ptr2;
	//**dPtr1 = *ptr1;
	//**dPtr2 = *ptr2;
	
	Plus(num);
	Change(&num);
	
	cout << "Plus + Change �Լ� ����(num) : " << num << endl;

	//SwapPointer(ptr1, ptr2); // �����ڸ� �̿��� Swap
	SwapPointer2(dPtr1, dPtr2); // ���������͸� �̿��� Swap
	cout << "SwapPointer ���" << endl << "*ptr1(ptr2�� ����Ŵ(4)) : " << *ptr1 << endl;
	cout << "*ptr2(ptr1�� ����Ŵ(-4)) : " << *ptr2 << endl;

	cout << "&ref ��� : " << ref << endl;

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

//�����ڸ� �̿��Ͽ� �����Ͱ� ����Ű�� ��ġ�� ��������.
void SwapPointer(int* &ptr1, int* &ptr2)
{
	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

//�����͸� �̿��ؼ� �����Ͱ� ����Ű�� �����͸� �ٲپ���.
void SwapPointer2(int** dPtr1, int** dPtr2)
{
	int* temp = *dPtr1; // *dPtr1���� ptr1�� ����Ű�� ���� �ּҰ� ����ȴ�.
	temp = *dPtr1;
	*dPtr1 = *dPtr2; // *dPtr1(ptr1�� ����Ű�� ���� �ּ�) �� *dPtr2(ptr2�� ����Ű�� ���� �ּ�)�� �������.
	*dPtr2 = temp; // *dPtr2���� temp�� ����Ǿ� �ִ� *dPtr1�� ���� �־��ش�.

	/*�� ��� ptr1, ptr2 �� ����Ű�� ���� �����Ǿ���.*/
}

