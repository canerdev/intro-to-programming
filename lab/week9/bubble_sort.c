#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 10

void bubble_sort(int arr[], int capacity) {
    // ascending
    int temp;

    for (int i = 0; i < capacity - 1; i++) {
        for (int j = 0; j < capacity - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    for (int i = 0; i < capacity; i++) {
        if (i == 0) {
            printf("Sorted Array(Ascending):");
        }

        printf(" %d", arr[i]);

        if (i == CAPACITY - 1) {
            printf("\n");
        }
    }

    // descending
    for (int i = 0; i < capacity - 1; i++) {
        for (int j = 0; j < capacity - 1 - i; j++)
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    for (int i = 0; i < capacity; i++) {
        if (i == 0) {
            printf("Sorted Array(Descending):");
        }

        printf(" %d", arr[i]);

        if (i == CAPACITY - 1) {
            printf("\n");
        }
    }
}

void read_input(int arr[], const int capacity) {
    printf("Enter 10 numbers:");

    for (int i = 0; i < capacity; i++) {
        scanf("%d", &arr[i]);
    }

    // while (i < capacity) {
    //     scanf("%d", &num);
    //     arr[i] = num;
    //     i++;
    // }
}

int main() {
    int nums[CAPACITY] = {};

    read_input(nums, CAPACITY);

    for (int i = 0; i < CAPACITY; i++) {
        if (i == 0) {
            printf("Original Array: ");
        }

        printf("%d ", nums[i]);

        if (i == CAPACITY - 1) {
            printf("\n");
        }
    }
    
    bubble_sort(nums, CAPACITY);

    return EXIT_SUCCESS;
}