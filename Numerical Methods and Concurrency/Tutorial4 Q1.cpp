# include <stdio.h>

int main(){
	int n, i;
	int sum = 0;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	int *ptr = arr;
	
	printf("Enter %d elements: \n", n);
	for(i = 0; i < n; i++){
		scanf("%d", ptr + i);
		
	}
	printf("The elements are: \n");
	for(i = 0; i < n; i++){
		printf("Addresses: %d, Value: %d\n",(ptr + i), *(ptr + i));
		sum += *(ptr + i);
	}
	
	printf("The sum is: %d ",sum);
	return 0;
}