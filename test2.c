#include <stdio.h>

int main() {
    float num1, num2, product;

    // Input first floating-point number
    printf("Enter first floating-point number: ");
    scanf("%f", &num1);

    // Input second floating-point number
    printf("Enter second floating-point number: ");
    scanf("%f", &num2);

    // Multiplying the two floating-point numbers
    product = num1 * num2;

    // Printing the result
    printf("Product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}
