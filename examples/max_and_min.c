#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int values[SIZE] = {12, 34, 234, 1, 90, 45, -123};

    int max_value = values[0];
    int min_value = values[0];

    for (int i = 0; i < SIZE; i++) {
        if (values[i] > max_value)
            max_value = values[i];

        if (values[i] < min_value)
            min_value = values[i];
    }

    printf("max value: %d \t min value: %d", max_value, min_value);

    return EXIT_SUCCESS;
}