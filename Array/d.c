//Find the sum of all the elements in the array.. count occurence of an element in an array.
#include<stdio.h>
int main(){
    int n, i, sum=0;
    int arr[100];

    printf("enter the numbers in the array");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i =0; i<n ; i ++){
        scanf("%d", &arr[i]);
    }

    for(i =0 ; i< n; i++){
        sum+= arr[i];
    }

    printf("The sum of elem is: %d\n", sum);
    return 0;

}