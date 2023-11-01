// Program to calculate the area of the circle 

#include<stdio.h>

int main() {

	int radius; // initialization
	printf("Enter the radius of the circle: ");
	scanf("%d", &radius); // taking input
	float Area = 3.14*radius*radius;
       	printf("Area of the circle = %f", Area);
	return 0;
}	
