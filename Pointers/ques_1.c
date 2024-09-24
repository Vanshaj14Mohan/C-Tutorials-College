#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};

    int *ptr = arr;
    printf("Elements of the array are:");
    for(int i =0; i<5; i++){
        printf("%d", *(ptr+ i));
    }
    printf("\n");
    return 0;
}