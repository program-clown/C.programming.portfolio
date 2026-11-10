#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double bal = 1000;
	int ch;
	double dep;
	double wit;



	do {

	printf("=== Simple ATM ===\n");
	printf("Current balance: %.2lf\n", bal);

	printf("Choose option what do you want to do: \n");
	printf("1. Check Balance \n");
	printf("2. Deposit Money \n");
	printf("3. Withdraw Money \n");
	printf("4. Exit \n");
	printf("Choose a number of option: \n");
	scanf("%d", &ch);
	
		switch (ch) {
		case 1:
			printf("Your balance: %.2lf\n\n", bal);
			break;
		case 2:

			printf("How many do you want to deposit: \n");
			scanf("%lf", &dep);
			if (dep > 0) {
				bal += dep;
				printf("Deposit successful!\n");
				printf("You're new balance: %.2lf\n", bal);
			}
			else {
				printf("Only positive numbers!!!");
			}
			break;
		case 3:
			printf("How many do you want to withdraw: \n");
			scanf("%lf", &wit);
			if (bal >= wit && wit > 0) {
				bal -= wit;
				printf("You're new balance: %.2lf", bal);
			}
			else {
				printf("Wront balance");
			}
			break;
		case 4:
			printf("See you later!");
			break;
		default:
			printf("Wrong choose ");
			break;
		}
	} while (ch != 4);

	return 0;
}