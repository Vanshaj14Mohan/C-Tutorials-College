#include<stdio.h>
unsigned long long int factorial(unsigned int i){
    if(i <= 1){
        return 1;
    }
    return i * factorial(i-1);
}

int main(){
    int i =5;
    printf("Factorial of %d is %d \n", i, factorial(i));
    return 0;
}

unsigned long long int factorial(unsigned int i){
    if(i <= 1){
        return 1;
    }
    return i * factorial(i-1);
}

// int main(){
//     int i  = 5;
//     // printf("Enter any number: ");
//     // scanf("%f", &i);
//     printf("Factorial of %d is %d \n", i, factorial(i));
//     return 0;
// }