// Calculate the area of the square

#include <stdio.h>

int main() {
	float side;
	printf("Enter the side of the square : ");
	scanf("%f", &side);
	float Area = side * side;
	printf("Area of the square = %.2f\n", Area);

	return 0;
}
