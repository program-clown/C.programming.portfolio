#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	int number = rand() % 20 + 1;
	int num = 0;
	int att = 0;

	printf("=== Number Guessing Game ===\n");

	while (number != num) {
		printf("Guess the number (1-20): ");
		scanf("%d", &num);
		att ++;
		if (number > num) {
			printf("Too low!!!\n");
		}
		else if (number < num) {
			printf("Too high!!!\n");
		}
		else {
			printf("Correct!You guessed the number!\n");
		}
	}
	printf("Attempts = %d", att);

}
