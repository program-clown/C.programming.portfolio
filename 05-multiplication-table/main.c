#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num;
    int mult;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        mult = num * i;
        printf("%d * %d = %d\n", num, i, mult);
    }

    return 0;
}