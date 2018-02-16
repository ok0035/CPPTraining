#include "namespace.h"

void BestComImp1::SimpleFunc()
{
	std::cout << "BestComImp1이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc()
{
	std::cout << "ProgComImp1이 정의한 함수" << std::endl;
}

int A::B::C::getInt()
{
	return 5;
}
