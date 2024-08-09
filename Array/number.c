//Find maximum and minimum number in c
#include <stdio.h>

int main() {
    int array[] = {34, 78, 12, 89, 5, 42, 67};
    int n = sizeof(array) / sizeof(array[0]); 

    // if (n == 0) {
    //     printf("Array is empty.\n");
    //     return 1;
    // }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
