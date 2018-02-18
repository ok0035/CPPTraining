
#include "DynamicAllocation.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main() {

	//ReverseString();
	PrintYourInput();

}

void ReverseString()
{
	int size = 100;
	char* str = (char*)malloc(sizeof(char) * size);
	int i = 0;
	int j = 0;
	int endSize = 0;

	gets_s(str, sizeof(char) * size);

	while (str[i] != '\0') {
		i++;
	}

	endSize = i;
	while (i != -1) {
		if (str[i] == ' ' || i == 0) {

			j = i+1;
			if (i == 0) j = i;

			do {

				printf("%c", str[j]);
				j++;

			} while (str[j] != '\0' && str[j] != ' ');

			printf(" ");
		}
		i--;
	}
	printf("\n");
	free(str);

}

void PrintYourInput()
{
	int i = 1;
	int j = 0;
	int numberOfSize = 3;
	int totalSize = 0;
	int* numArr = (int*)malloc(sizeof(int) * numberOfSize);

	while (1) {

		scanf_s("%d", &numArr[totalSize], sizeof(int));
		if (numArr[totalSize] == -1) break;

		totalSize++;
		if (totalSize % numberOfSize == 0) {
			i++;
			realloc(numArr, sizeof(int) * numberOfSize * i);
		}

	}

	for (j = 0; j < totalSize; j++) {
		printf("%d\n", numArr[j]);
	}

	free(numArr);
}
