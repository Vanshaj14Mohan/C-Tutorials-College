// #include<iostream>
// int main()
// {

// }

#include <stdio.h>

int main() {
    int num; // Number for which we want to print the table
    int i;   // Loop counter

    // Prompt the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table for the given number
    printf("\nMultiplication table for %d:\n", num);
    printf("------------------------\n");
    printf(" %d | ", num);
    for (i = 1; i <= 10; i++) {
        printf("%4d ", num * i);
    }
    printf("\n");
    
    // Print the table for better readability
    printf("------------------------\n");
    for (i = 1; i <= 10; i++) {
        printf("%4d ", i);
    }
    printf("\n");

    return 0;
}
