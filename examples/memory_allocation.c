#include <stdio.h>
#include <stdlib.h>

int main() {
    // unlike static arrays, which you are stuck with after you create them, you can change the size of a dynamic array.
    // make a new, improved, bigger array and copy over the old data and delete anything you no longer need.
    
    // take the array size from the user
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    // allocate memory dynamically in the heap
    double *small_array = (double *)malloc(n * sizeof(double));
    double *bigger_array = (double *)malloc(2 * n * sizeof(double));

    // read input from the user
    printf("enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf(" %lf", &small_array[i]);
    }

    // print the small array
    printf("small array: ");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", small_array[i]);
    }

    // copy the small array into the big array
    for (int i = 0; i < n; i++) {
        bigger_array[i] = small_array[i];
    }

    // free what you no longer need
    free(small_array);
    
    
    small_array = bigger_array;
    n = 2 * n;

    // set the pointer to NULL to avoid accessing freed memory
    // small_array = NULL;

    // print the bigger array
    // printf("\nbigger array: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%.2lf ", bigger_array[i]);
    // }

    printf("\nsmall array after free: ");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", small_array[i]);
    }


    // allocating 2D array
    int *arr[10]; // *array[] means array of pointer
    for (int i = 0; i < 10; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 5);        
    }

    return EXIT_SUCCESS;
}