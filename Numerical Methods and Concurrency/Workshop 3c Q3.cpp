#include <stdio.h>

// Function to search for an element in the array
void searchElement(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            printf("Element found at index: %d\n", i);
            return;
        }
    }
    printf("Element Not Found\n");
}

int main() {
    int arr[] = {20, 15, 87, 71, 24, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;

    // Input the number to search
    printf("Enter a number to search: ");
    scanf("%d", &num);

    // Search the element
    searchElement(arr, size, num);

    return 0;
}
