// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i =1; i<11; ++i)
//     {
//         printf("\n %d", i);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i ;
    for(i =0; i<=10; i++)
    {
        if(i == 5)
        continue;
        printf("\t %d", i);
    }
    return 0;
}