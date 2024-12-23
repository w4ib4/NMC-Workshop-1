#include <stdio.h>

// Function to find the smallest and largest integers
void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[3];

    // Input three integers
    printf("Enter three integers:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

    // Find smallest and largest numbers
    findMinMax(arr, 3, &min, &max);

    // Output results
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}
