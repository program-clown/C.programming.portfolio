#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int sum = 0;

	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	printf("Numbers: ");
	if (num > 0) {
		for (int i = 1; i <= num; i++) {
			printf("%d ", i);
			sum += i;
		}
		printf("\nSum: %d", sum);
	}
		else if(num <= 0) {
			printf("Invalid number");
		}
	return 0;
	}
