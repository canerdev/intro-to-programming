#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10 

int main() {
    int values[SIZE] = {12, 34, 234, 1, 90, 45, -123};

    int index = 0;
    bool is_found = false;

    // we are looking for 90
    for (int i = 0; i < SIZE; i++) {
        if (values[i] == 90 && !is_found) {
            is_found = true;
            break;
        }
        index++;
    }

    printf("the number you are looking for is found at the position: %d", index + 1);

    return EXIT_SUCCESS;
}