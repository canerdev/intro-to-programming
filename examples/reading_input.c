#include <stdio.h>
#include <stdlib.h>

int main() {
    // precise number of inputs

    // const int NUMBER_OF_INPUTS = 5;
    // int values[NUMBER_OF_INPUTS];

    // for (int i = 0; i < NUMBER_OF_INPUTS; i++) {
    //     printf("enter the number you want to add into your array: ");
    //     scanf("%d", &values[i]);
    // }

    // for (int i = 0; i < NUMBER_OF_INPUTS; i++) {
    //     printf("%d", values[i]);
    //     if (i < NUMBER_OF_INPUTS - 1)
    //         printf(" | ");
    // }


    // arbitrary number of inputs -- it is a bit more complicated since we allow user to keep entering once the array is full
    
    const int CAPACITY = 100;
    int values[CAPACITY];
    int input, current_size = 0;

    printf("enter the number you want to add into your array (0 to quit): ");
    scanf("%d", &input); 

    while (input > 0) {
        if (current_size < CAPACITY) {
            values[current_size] = input;
            current_size++;
        }
        printf("enter the number you want to add into your array (0 to quit): ");
        scanf("%d", &input);
    }

    for (int i = 0; i < current_size; i++) {
        printf("%d", values[i]);
        if (i < current_size - 1)
            printf(" | ");
    }

    return EXIT_SUCCESS;
}