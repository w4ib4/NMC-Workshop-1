#include <stdio.h>

// Function to replace elements with 5
void replaceWithFive(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = 5;
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Replacing elements with 5
    replaceWithFive(arr, n);

    printf("\n\nArray after replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
