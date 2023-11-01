// Input account number, balance and perform the operation according to the user 
// choice

#include <stdio.h>

int main() {
	long int Account_num, balance, amount, x;
	char operation;
	printf("Enter the 10 digit account number");

	scanf("%ld", &Account_num);

	x=Account_num/(100000l*10000l);

	if( x >= 1 && x <= 9) {

		printf("Enter the balance in the account : ");
		scanf("%ld", &balance);

		printf("If you want to deposit then enter d\nFor withdrawl enter w\n");
		scanf(" %c", &operation);
		if(operation == 'd') {
			printf("Enter the amount : ");
			scanf("%ld", &amount);
			printf("Total balance = %ld", balance+amount);
		} else if(operation == 'w') {
			printf("Enter the amount : ");
			scanf("%ld", &amount);
			if(amount <= balance) {
				printf("Balnace = %ld", balance-amount);
			} else {
				printf("Insufficient Balance");
			}
		} else {
			printf("Enter the valid option\n");
		}
	} else {
		printf("Enter the ten digit account number\n");
	}

	return 0;
}


