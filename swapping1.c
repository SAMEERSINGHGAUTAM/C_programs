// Swapping of two numbers with the use of third variable.

#include <stdio.h>

int main() {

	int a,b,c;
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	printf("a = %d, b = %d\n", a,b);
	c = b;
	b = a;
	a = c;
	printf("After swapping\nValue of a = %d\nValue of b = %d\n", a ,b);
	
	return 0;
}
