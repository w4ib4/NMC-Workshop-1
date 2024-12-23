#include <stdio.h>

int main() {
    int n, i, count = 0, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // Assign pointer to the array

    // Input array elements
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process the array
    for (i = 0; i < n; i++) {
        if (*(ptr + i) % 5 == 0 && *(ptr + i) % 2 != 0 && *(ptr + i) % 3 != 0) {
            count++;
            sum += *(ptr + i);
        }
    }

    // Output results and pointer addresses
    printf("\nCount of numbers: %d\n", count);
    printf("Sum of numbers: %d\n", sum);
    printf("\nPointer address: %p\n", (void *)ptr);
    printf("Array address: %p\n", (void *)arr);
    printf("First element address: %p\n", (void *)&arr[0]);

    return 0;
}
