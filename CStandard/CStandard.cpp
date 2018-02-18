#include "CStandard.h"
using namespace std;

int main() {

	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 5; i++) {
		int num = rand() % 100;
		printf("%d\n", num);
	}

}