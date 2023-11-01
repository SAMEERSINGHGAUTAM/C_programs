#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("Enter a number : ");
	scanf("%d", &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	printf("Enter the third number : ");
	scanf("%d", &num3);
	(num1>=num2) ? (num1>=num3) ? printf("%d is greatest", num1) : printf("%d is greatest", num3) : (num2>=num3) ? printf("%d is greatest", num2) : printf("%d is greatest", num3);
        return 0;
}	
