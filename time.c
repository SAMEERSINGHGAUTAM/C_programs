// print the time given in seconds in hrs, min and sec

#include <stdio.h>

int main() {

	int sec;
	printf("Enter the time in seconds");
	scanf("%d", &sec);
  	int min, hr;
  	hr = sec/(60*60);
  	min = sec%(60*60)/60; // **
  	sec = sec%60;
  	printf("Time = %d hrs %d mins and %d sec\n", hr, min, sec);
  	
  	return 0;
}
