#include <stdio.h>


int findMin(int *a, int *b, int *c) {
    int min = *a;
    if (*b < min) {
        min = *b;
    }
    if (*c < min) {
        min = *c;
    }
    return min;
}

int main() {
    int num1, num2, num3;
    int *p1, *p2, *p3;

    
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", p1, p2, p3);

   
    int sum = *p1 + *p2 + *p3;
    int multiplication = *p1 * *p2 * *p3;
    int subtraction = *p1 - *p2 - *p3;
    float quotient = (*p3 != 0) ? ((float)*p1 / *p2 / *p3) : 0; // Check division by zero
    int min = findMin(p1, p2, p3);


    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Multiplication: %d\n", multiplication);
    printf("Subtraction: %d\n", subtraction);
    if (*p2 != 0 && *p3 != 0) {
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Division by zero error!\n");
    }
    printf("Minimum: %d\n", min);

    return 0;
}
