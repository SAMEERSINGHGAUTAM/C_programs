// Swapping of two numbers without using third variable

#include <stdio.h>

int main() {
	int x,y;
	printf("Enter the value of x and y : ");
	scanf("%d%d", &x, &y);
	printf("value of x = %d\nValue of y = %d\nAfter swapping\n", x,y);
	x = x*y;
	y = x/y;
	x = x/y;
	printf("value of x = %d\nValue of y = %d\n", x,y);
	
	return 0;
} 
