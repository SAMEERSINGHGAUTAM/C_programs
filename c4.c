// Calculate the area of the rectangle 

#include <stdio.h>

int main() {
	float l,b;
	printf("Enter the length of the rectangle: ");
	scanf("%f", &l);
	printf("Enter the breadth of the reactangle: ");
	scanf("%f", &b);
	float Area = l * b ;
	printf("Area of the rectangle = %.2f", Area);
	
	return 0;
}
