#include <stdio.h>

int BinarySearch(int i, int j, int key) {
	int pivot = i + (j-i)/2;
	if(pivot == key) {
		return pivot;
	}else if (key > pivot) {
		j = pivot -1;
	} else {
		i = pivot + 1;
	}
	return -1;
}
int main() {
	int arr[]= {5, 7, 9, 11, 17, 21}
	int key = 5;
	
