#include <stdio.h>

int main() {

	int a;
	printf("Enter the number");
	scanf("%d", &a);
	printf("Area of a square of side %d is %d", a, a*a);
	printf("Area of a circle of radius %d is %f", a, 3.14*a*a);
	return 0;
}
