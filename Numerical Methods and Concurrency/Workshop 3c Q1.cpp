#include <stdio.h>

int main() {
    int num1, num2;
    int *p1, *p2;

    // Assign addresses to pointers
    p1 = &num1;
    p2 = &num2;

    // Input two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", p1, p2);

    // Find minimum using pointers
    int min = (*p1 < *p2) ? *p1 : *p2;

    printf("The minimum between %d and %d is: %d\n", *p1, *p2, min);

    return 0;
}
