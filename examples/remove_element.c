#include <stdio.h>
#include <stdlib.h>

int main() {
    // if the elements in the array are UNORDERED: overwrite the element to be removed with the last element of the array, then remove the value that was copied by shrinking the size of the array
    
    int values[] = {12, 3, 25, 54, 24, 64, -12}; // size = 7
    int index, current_size = 0;

    while (values[current_size]) {
        printf("%d ", values[current_size]);
        current_size++;
    }
    
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

    return EXIT_SUCCESS;
}