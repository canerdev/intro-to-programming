#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int size) {    
    int sum = 0;
    int *p = arr;
    
    for (int i = 0; i < size; i++) {
        sum += *p; // add the value to which p points
        p++; // advance p to the next array element
    }

    return sum;
}

int main() {
    int arr[] = {14, 23, 5, 15, 2};

    // the name of the array denotes a pointer to the starting element
    // arr[0] == *arr 
    // arr[n] == *(arr + n)
    // while (a + 1) is an adress, *(a + 1) is the value stored in that address

    printf("first element of the array: %d\n", arr[0]); 
    printf("first element of the array: %d\n", *arr); 
    
    printf("3rd element of the array: %d\n", arr[2]); 
    printf("3rd element of the array: %d\n", *(arr + 2));
    printf("sum of the elements in the array is: %d\n", sum(arr, 5)); 
    return EXIT_SUCCESS;
}