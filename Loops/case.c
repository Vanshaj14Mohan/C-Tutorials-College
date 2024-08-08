#include<stdio.h>
int main()
{
    int num, sum = 0;
    read:
    printf("\n Enter Number. Enter 999 at end:");
    scanf("%d", &num);
    if(num !=999)
    {
        if(num < 0)
        goto read;
        sum += num;
        goto read;
    }
    printf("\n Sum of the numbers entered by the user is = %d", sum);
    return 0;
}