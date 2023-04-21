#include <stdio.h>
#include <stdlib.h>

int main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8}; // must be an even number of elements
    int size = sizeof(values) / sizeof(int);
    
    int i = 0;
    int j = size / 2;

    while (i < size / 2) {
        int temp = values[j];
        values[j] = values[i];
        values[i] = temp;
        i++;
        j++;
    }

    for (int i = 0; i < size; i++) {
        printf("%d", values[i]);
        if (i < size - 1)
            printf(" | ");
    }

    return EXIT_SUCCESS;
}