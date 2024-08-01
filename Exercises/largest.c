#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, secondLargest;

    // Prompt user to enter three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest and second largest numbers
    if (num1 > num2) {
        if (num1 > num3) {
            largest = num1;
            secondLargest = (num2 > num3) ? num2 : num3;
        } else {
            largest = num3;
            secondLargest = num1;
        }
    } else {
        if (num2 > num3) {
            largest = num2;
            secondLargest = (num1 > num3) ? num1 : num3;
        } else {
            largest = num3;
            secondLargest = num1;
        }
    }

    // Display the results
    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", secondLargest);

    return 0;
}
