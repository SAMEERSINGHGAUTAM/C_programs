// Input a three digit number, reverse the nuumber and then print its sum of its digits.

#include <stdio.h>

int main() {
	int num;
	printf("Enter a three digit number");
 	scanf("%d", &num);
//	int x = printf(num);
	
		//x = num;
		num = num%10*100 + num/10%10*10 + num/100;
		int x = num%10 + num/10%10 + num/100;
		printf("Reverse of the number = %d\n", num);
		printf("Sum of the digits of the number = %d\n", x);
	
	return 0;
}
	
