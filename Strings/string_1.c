// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int i, length;
//     printf("Enter a string:");
//     scanf("%s", str);
//     //finding string without using strlen()
//     length = 0;
//     for(i =0; str[i]!='\0'; i++)
//     length++;
//     printf("Length of %s = %d\n", str,length);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i, length;
    printf("Enter a string:");
    scanf("%s", str);
    //finding string using strlen()
    length = 0;
    length = strlen(str);
    printf("Length of %s using strlen %d\n", str, length);
    return 0;
}
