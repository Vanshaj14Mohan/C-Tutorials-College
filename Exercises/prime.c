// Wap to check whether a number is prime or not.
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int number) {
    // Prime numbers are greater than 1
    if (number <= 1) {
        return false;
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;  // If divisible by i, not a prime number
        }
    }

    return true;  // No factors found, it's a prime number
}

int main() {
    int num;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and display the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
