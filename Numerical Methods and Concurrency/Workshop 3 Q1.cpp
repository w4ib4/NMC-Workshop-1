#include<stdio.h>

int maximumNum(int *num1, int *num2){
	if(num1 < num2){
		printf("The maximum number is: %d\n", *num1);
	}else{
		printf("The maximum number is: %d\n", *num2);
	}
}
int main(){
	int a, b;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	maximumNum(&a, &b);
	return 0;
	30
}