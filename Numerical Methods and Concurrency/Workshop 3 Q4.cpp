#include <stdio.h>


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
    int min, max;

    printf("Enter three integers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, 3, &min, &max);

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}
