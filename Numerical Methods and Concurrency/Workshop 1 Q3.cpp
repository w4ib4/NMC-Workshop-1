#include <stdio.h>

int printTriangularNumber(int n){
	for (int i = 1; i<=n; i++){
		int triangularNumber = i * (i+2) / 2;
		printf("%d",triangularNumber);
	}
	printf("\n");
}
int main(){
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	if (n>0){
		printf("Triangular numbers upto %dth term:\n",n);
		printTriangularNumber(n);
	}else{
		printf("Please enter a positive integer.\n");
	}
	return 0;
}