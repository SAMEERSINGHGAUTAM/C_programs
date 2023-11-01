// Simple Interest 
#include <stdio.h>

int main() {
	float princi, rate, time;
	printf("Enter the principal amount : ");
	scanf("%f", &princi);//do not use %.2f
	printf("Enter the rate of interest : ");
	scanf("%f", &rate);
	
	printf("Enter the time duration : ");
	scanf("%f", &time);
	int Time = time/12;
	float SI = princi*rate*time/100;

	printf("Simple Interest = %.2f", SI);

	return 0;
}
