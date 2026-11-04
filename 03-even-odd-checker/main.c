#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1;
	int ol;

	printf("Enter the Number: ");
	scanf("%d", &num1);

	ol = num1 % 2;
	
	if (num1 == 0) {
		printf("%d is an even number.\n", num1);
		printf("The number is zero");
	}
	else if (ol != 0) {
		printf("%d is an odd number.\n", num1);


	}
	else if (ol == 0) {
		printf("%d is an even number.\n", num1);

	}
	return 0;
}