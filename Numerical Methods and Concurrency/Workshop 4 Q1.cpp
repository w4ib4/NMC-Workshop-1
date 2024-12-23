#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;

    // Allocating memory dynamically
    intPtr = (int *)malloc(sizeof(int));
    charPtr = (char *)malloc(sizeof(char));
    floatPtr = (float *)malloc(sizeof(float));

    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Accept values from the user
    printf("Enter an integer: ");
    scanf("%d", intPtr);

    printf("Enter a character: ");
    scanf(" %c", charPtr);

    printf("Enter a float: ");
    scanf("%f", floatPtr);

    // Display the values
    printf("\nYou entered:\n");
    printf("Integer: %d\n", *intPtr);
    printf("Character: %c\n", *charPtr);
    printf("Float: %.2f\n", *floatPtr);

    // Free allocated memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
