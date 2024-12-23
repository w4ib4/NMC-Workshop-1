#include <stdio.h>

int main() {
    int n, i, count = 0, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding numbers divisible by 5 and not divisible by 2 and 3
    for (i = 0; i < n; i++) {
        if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
            count++;
            sum += arr[i];
        }
    }

    printf("\nCount of numbers: %d\n", count);
    printf("Sum of numbers: %d\n", sum);

    return 0;
}
