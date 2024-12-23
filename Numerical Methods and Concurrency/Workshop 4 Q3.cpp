#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *sumArr;
    int n, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    // Allocate memory for the arrays
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    sumArr = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || sumArr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sum the corresponding elements and store in sumArr
    for (i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    // Display the result
    printf("The resulting array after summing is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sumArr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(sumArr);

    return 0;
}
