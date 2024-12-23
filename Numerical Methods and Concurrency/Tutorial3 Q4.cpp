#include <stdio.h>

int main(){
	int rows, cols;
	
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &rows, &cols);
	
	int arr1[rows][cols1], arr2[rows][cols], result[rows][cols];
	
	printf("Enter elements of the first matrix: \n");
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			scanf("%d", &arr1[i][j]);
		}
			
	}
	printf("Resultant matrix after addition: \n");
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			printf("%d", result[i][j]);
		}
		printf
	}
	return 0;
}