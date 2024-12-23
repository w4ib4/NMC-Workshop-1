#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, max;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);

    // Free allocated memory
    free(arr);

    return 0;
}
