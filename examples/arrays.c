#include <stdio.h>

#define SIZE 10

int main() {
    // const int CAPACITY = 100; // it is a good idea to use a named constant for the size

    double values[] = {12, 124, 2, 31, 53.3, 234.45, 67, 45}; // size is set to 10 but initial size is 8 so 9th and 10th elements are set to 0

    // double values[CAPACITY];

    // int current_size = 0; // array is empty initally
    // double input;
    // scanf("%lf", &input);

    // // take inputs from the user and fill out the array 
    // while (input > 0) {
    //     if (current_size < CAPACITY) {
    //         values[current_size] = input;
    //         current_size++;
    //     }
    //     scanf("%lf", &input);
    // }

    // for (int i = 0; i < current_size; i++) {
    //     printf("%.2lf\n", values[i]);
    // }

    
    // filling out arrays
    // for (int i = 1; i < 11; i++) {
    //     values[i - 1] = i * i;
    //     current_size++;
    // }

    // for (int i = 0; i < current_size; i++) {
    //     printf("%.2lf\n", values[i]);
    // }


    // copying arrays
    // int squares[5] = {0, 1, 4, 9, 16};
    // int copied_squares[5];
    // int sum = 0;

    // for (int i = 0; i < 5; i++) {
    //     copied_squares[i] = squares[i];
    //     sum += copied_squares[i];
    // }

    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", copied_squares[i]);
    // }

    // printf("average is: %d", sum / 5);


    // element separators
    for (int i = 0; i < 8; i++) {
        printf("%.2lf", values[i]);
        if (i < 7)
            printf(" | ");
    }

    
    // length of an array which does not have an inital size
    printf("\nlength of the array: %d", sizeof(values) / sizeof(values[0]));
    


    return 0;
}