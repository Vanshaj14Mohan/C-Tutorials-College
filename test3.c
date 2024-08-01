// #include <stdio.h>

// int main() {
//     int number;

//     // Prompt the user to enter an integer
//     printf("Enter an integer: ");

//     // Read the integer entered by the user
//     scanf("%d", &number);

//     // Print the entered integer
//     printf("You entered: %d\n", number);

//     return 0;
// }

// Using a for loop to iterate from 1 to 10
// #include <stdio.h>
// int main() {
//     int i;
    
//     for (i = 1; i <= 10; i++) {
//         printf("%d\n", i);  // Print each number followed by a new line
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     if(x >0)
//     x++;
//     printf("\n x = %d", x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char grade = 'g';
//     switch(grade){
//         case 'A':
//         printf("Excellent!\n");
//         break;
//         case 'B':
//         printf("Good!\n");
//         break;
//         case 'C':
//         printf("Well done!\n");
//         break;
//          case 'D':
//         printf("You passed!\n");
//         break;
//          case 'F':
//         printf("Better Try again!\n");
//         break;
//         default:
//         printf("Invalid grade \n");
//     }
//     printf("Your grade is  %c\n", grade);
//     return 0;
// }


//Nested switch
#include<stdio.h>
int main()
{
    int ID = 500;
    int password = 000;
    printf("Please Enter your ID:\n");
    scanf("%d", &ID);
    switch(ID){
        case 500:
        printf("Enter your password:\n");
        scanf("%d", & password);
        switch(password){
            case 000:
            printf("Welcome Dear Programmer\n");
            break;
            default:
            printf("Incorrect password");
            break;
        }
        break;
        default:
        printf("Incorrect ID");
        break;
    }
}