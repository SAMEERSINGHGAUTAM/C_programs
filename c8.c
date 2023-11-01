// Convert distance into meter into centimeter

#include <stdio.h>

int main() {
	float meter, cm;
	printf("Enter the distance into meter : ");
	scanf("%f", &meter);
	cm = meter*100;
	printf("%.2f meters = %.2f cm", meter, cm);

	return 0;
}

