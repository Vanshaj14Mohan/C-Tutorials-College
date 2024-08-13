#include<stdio.h>
//global variable declaration
// char alpha(char char1, char char2);
int test()
{
    char ch;
    printf("Numbers from a-z are: \n");
    for(ch = 'a'; ch <='z'; ch++)
    {
        printf("%c\n", ch);
    }
    return 0;
    // char a = a;
    // char z = z;
    // int ret;

    // ret = alpha(a,z);
    // printf("Alphabet value is: %c \n", ret);
    // return 0;
}

void main(){
    test();
}

