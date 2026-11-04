#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	double C;
	double F;

	printf("Enter Temperature in Celsium: \n");
	scanf("%lf", &C);


	if (C < 0) {

		F = C * 9 / 5 + 32;
		printf("Temperature in Fahrenheit: %.2lf\n", F);
		printf("It's freezing outside!");
	}
	
	else {
	
	F = C * 9 / 5 + 32;
	printf("Temperature in Fahrenheit: %.2lf", F);
	
	}

	return 0;

}