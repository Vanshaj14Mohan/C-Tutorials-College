#include<stdio.h>
//use #include>string.h> to use inbuild functions of string
int main(){
    char str[30];
    printf("Enter a string: ");
    scanf("%s", &str);
    printf("Given string is %s:", str);
    return 0;
}

//int strlen(s); 