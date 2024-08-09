//Count occurence of an element in C.
#include <stdio.h>
int main() {
    // Define and initialize the array
    int array[] = {1, 3, 7, 8, 3, 4, 3, 9};
    int n = sizeof(array) / sizeof(array[0]); // Number of elements in the array
    
    int element_to_count = 3; 
    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (array[i] == element_to_count) {
            count++;
        }
    }

    // Print the result
    printf("Element %d occurs %d times in the array.\n", element_to_count, count);

    return 0;
}

