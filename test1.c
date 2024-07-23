#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input first integer
    printf("Enter first integer: ");
    scanf("%d", &num1);

    // Input second integer
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Adding the two integers
    sum = num1 + num2;

    // Printing the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}