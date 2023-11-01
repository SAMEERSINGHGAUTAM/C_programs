// Input age and voting area and print whether person is eligible for voting or not.
// Rajendra Nagar - 114
// Silicon City - 214
// Shiv City - 314
// Rau - 414

#include <stdio.h>

int main() {

	int age, A;

	printf("Enter your age : ");
	scanf("%d", &age);

	if(age >= 18) {

		printf("Enter the voting area code: ");
		scanf("%d", &A);

		if(A == 114 || A == 214 || A == 314 || A==414) {
			printf("Eligible for voting\n");
		} else {
			printf("not eligible for voting\n");
		}
	} else {
		printf("Age is less than 18 yearsn\n");
	}

	return 0;
}
