#include <stdio.h>
int main(){
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d elements: \n", n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	
	int largest = arr[0];
	for (int i = 1; i<n; i++){
		if(arr[i] > largest){
			largest = arr[i];	
		}
	}
	printf("\n The largest element in the array is: %d", largest);
	
	return 0;
}
