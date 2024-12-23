#include <stdio.h>


void searchElement(int arr[], int size, int element) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at index %d\n", element, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element Not Found\n");
    }
}

int main() {
    int arr[] = {10, 5, 7, 91, 54, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    searchElement(arr, size, element);
    return 0;
}
