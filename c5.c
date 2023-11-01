// Calculate the area of the triange

#include <stdio.h>

int main() {

	float a,b, Area;
	printf("Enter the base of the triangle : ");
	scanf("%f", &a);
	printf("Enter the height of the triangle : ");
	scanf("%f", &b);
	Area = 1.0/2 * a * b;
	printf("Area of the triangle = %.2f", Area);
	
	return 0;
}
