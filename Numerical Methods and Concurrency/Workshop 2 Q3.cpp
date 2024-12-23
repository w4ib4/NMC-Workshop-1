#include <stdio.h>


void printTriangularNumbers(int n) {
    int i, triangularNum;

    printf("Triangular numbers up to the %dth term:\n", n);
    for (i = 1; i <= n; i++) {
        triangularNum = i * (i + 1) / 2; 
        printf("%d ", triangularNum);
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n > 0) {
      
        printTriangularNumbers(n);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
