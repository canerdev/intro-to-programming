#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // if the elements in the array are UNORDERED: overwrite the element to be removed with the last element of the array, then remove the value that was copied by shrinking the size of the array
    
    int values[] = {12, 3, 25, 54, 24, 64, -12};
    int index;
    int current_size = sizeof(values) / sizeof(int);
    
    printf("enter the index of the element to be removed: ");
    scanf("%d", &index);

    values[index] = values[current_size - 1];
    current_size--;

    // print the array without the removed element
    for (int j = 0; j < current_size; j++) {
        printf("%d", values[j]);
        if (j < current_size - 1)
            printf(" | ");
    }



    // if the elements in the array are ORDEREDE: move all elements following the element to be removed to a lower index, and then remove the last element by shrinking the size.
    
    // int values[] = {12, 3, 25, 54, 24, 64, -12};
    // int index;
    // int current_size = sizeof(values) / sizeof(int);

    // for (int i = 0; i < current_size; i++) {
    //     printf("%d", values[i]);
    //     if (i < current_size - 1)
    //         printf(" | ");
    //     else
    //         printf("\n");
    // }

    // printf("enter the index of the element to be removed: ");
    // scanf("%d", &index);

    // while (index >= current_size) {
    //     printf("index must be smaller than the current size of the array! Please enter a valid index: ");
    //     scanf("%d", &index);
    // }

    // for (int i = index + 1; i < current_size; i++) {
    //     values[i - 1] = values[i];
    // }
    // current_size--;

    // // print the array without the element to be removed
    // for (int i = 0; i < current_size; i++) {
    //     printf("%d", values[i]);
    //     if (i < current_size - 1)
    //         printf(" | ");
    // }

    return EXIT_SUCCESS;
}