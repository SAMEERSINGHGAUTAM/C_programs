// Concert feet into inch 

#include <stdio.h>

int main() {
	float feet, inch ;
	printf("Enter the distance into feet : ");
	scanf("%f", &feet);
	inch = feet/12;
	printf("%.2f feet = %.2f inches", feet, inch);

	return 0;
}

