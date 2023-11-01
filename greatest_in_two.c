#include <stdio.h>

int main() {
	int num1, num2;
	printf("Enter a number : ");
	scanf("%d", &num1);
	printf("Enter another number : ");
	scanf("%d", &num2);
	(num1>=num2) ? printf("%d is greatest", num1) : printf("%d is greatest", num2);
        return 0;
}       
