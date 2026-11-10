#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	
	int grades[5];
	int sum = 0;
	double ave;
	int max = 0;
	int min = 100;
	printf("Student Grade Management System\n");

	for (int i = 0; i < 5; i++) {
		do {
			printf("Enter grade for student %d: ", i + 1);
			scanf("%d", &grades[i]);

			if (grades[i] < 0 || grades[i] > 100) {
				printf("Invalid grade! Try again.\n");
			}
		} while (grades[i] < 0 || grades[i] > 100);
	}
		for (int i = 0; i < 5; i++) {
			printf("Grade for student %d: %d\n", i + 1, grades[i]);
		}
		for (int i = 0; i < 5; i++) {
			sum += grades[i];
		}
		printf("=== Results ===\n\n");
		ave = (double)sum / 5;
		printf("Average Grade: %.2lf\n", ave);
		for (int i = 0; i < 5; i++) {
			if (grades[i] > max)
				max = grades[i];

		}
		printf("Max mark: %d\n", max);
		for (int i = 0; i < 5; i++) {
			if (grades[i] < min)
				min = grades[i];

		}
		printf("Min mark: %d\n", min);
	

	return 0;
	}