#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of integers in an array
int calculateSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int *arr, n, i, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum
    sum = calculateSum(arr, n);

    printf("The sum of the array elements is: %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
