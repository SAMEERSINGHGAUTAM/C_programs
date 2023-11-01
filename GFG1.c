#include <stdio.h>
#define n 5
int main() {

	int Arr[n], count=0;
	printf("Enter  %d elements in array :\n", n);
        
	for(int i = 0 ; i < n; i++) {
		scanf("%d", (Arr + i));
		// printf("Now enter %d\n"i+1);
	}
	printf("%d elements have been entered\n", n);
	
	for(int i = 0 ; i < n ; i++) {
		if(Arr[i] == 0) {
		count++;
		continue;
		} else {
			if(count > 0) {
				Arr[i-count] = Arr[i];
				Arr[i] = 0;
			}
		}
	}
	for(int i = 0 ; i < n ; i++) {
		printf("%d\t", Arr[i]);
	}
	
	return 0;
}


