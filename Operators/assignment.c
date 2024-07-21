//working on assignment operator 
#include<stdio.h>
int main()
{
int a = 5, c;
c =a; //now c =5
printf("c = %d \n", c);
c += a; //now c 10
printf("c = %d \n", c);
c -= a; //now c= 5
printf("c = %d\n", c);
c *= a; //now c = 25
printf("c = %d\n", c);
c /= a; //now c = 5
printf("c = %d\n", c);
c %= a; //now c = 0
printf("c = %d\n", c);
return 0;
}