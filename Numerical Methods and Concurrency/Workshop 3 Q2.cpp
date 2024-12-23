#include <stdio.h>

int main(){
	int n, i, count = 0, sum = 0;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", n);
	
	int arr[n];
	
	printf("Enter %d elements: \n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Count of numbers divisible by 7 but not by 2 and 3: %d\n",count);
	scanf("Sum of such numbers: %d\n", sum);
	
	return 0;