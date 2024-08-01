#include <stdio.h>
#include <ctype.h>  // For isalpha(), isdigit()

int main() {
    char ch;

    // Prompt user to enter a character
    printf("Enter a single character: ");
    scanf(" %c", &ch);  // Note the space before %c to handle any leading whitespace

    // Check if the character is an alphabet, digit, or special character
    if (isalpha(ch)) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
