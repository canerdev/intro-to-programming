#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void swap(int *first, int *second) {
    int *temp = first;
    first = second;
    second = temp;
}

void random_fill_array(int *arr) {
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10;
        arr++;
    }
}

int main() {
    int arr[SIZE];
    srand(0);
    random_fill_array(arr);

    printf("ORIGINAL ARRAY:");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    // reverse
    for (int i = 0; i < SIZE / 2; i++) {
        swap((int *)arr[i], (int *)arr[SIZE - 1 - i]);
    }

    printf("REVERSE ARRAY:");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}