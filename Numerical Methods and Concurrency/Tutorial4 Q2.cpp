#include <stdio.h>

int main(){
	int n, i, key, found = 0;
	int sum = 0;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	int *ptr = arr;
	
	printf("Enter %d elements: \n", n);
	for(i = 0; i < n; i++){
		scanf("%d", ptr + i);
		
	}
	printf("Enter the element to search: ");
	scanf("%d", &key);
	for( i = 0; i < n; i++){
		if(*(ptr + i) == key){
			printf("Element found at position %d\n", i + 1);
			found = 1;
			break;//dont use break to find position of same element in different index.
		}
	}
	if (!found){
		printf("Element not found.\n");
	}
	return 0;

}