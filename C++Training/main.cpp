#include "namespace.h"

using std::cout;
using std::endl;

int main() {

	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();

	namespace s = A::B::C;

	std::cout << s::getInt() << std::endl;

	return 0;
}