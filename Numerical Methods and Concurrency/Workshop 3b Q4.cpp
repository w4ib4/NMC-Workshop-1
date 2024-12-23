#include <stdio.h>

// Function to replace elements with a given value
void replaceWithValue(int arr[], int length, int value) {
    for (int i = 0; i < length; i++) {
        arr[i] = value;
    }
}

int main() {
    int n, value;

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

    printf("\n\nEnter the value to replace each element: ");
    scanf("%d", &value);

    // Replacing elements with the given value
    replaceWithValue(arr, n, value);

    printf("\nArray after replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
