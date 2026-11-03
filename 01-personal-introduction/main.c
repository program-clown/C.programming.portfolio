#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	int age, future_age;
	char name[20];
	char choose;


	printf("Please Enter your name: ");
	scanf(" %s", &name);
	printf("Please enter your age: ");
	scanf(" %d", &age);

	printf("Do you wanna to see your age after 5 years? Choose Y or N");
	scanf(" %c", &choose);

	if (choose == 'Y') {
		future_age = age + 5;
		printf ("Hello, %s \n", name);
		printf ("You are %d years old\n", age);
		printf("In 5 years< you wil be %d\n", future_age);
	}
	else {
		printf("Hello, %s\n", name);
		printf("You are %d years old\n", age);
	}



	return 0;
}