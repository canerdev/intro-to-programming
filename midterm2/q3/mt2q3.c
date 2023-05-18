#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define CAPACITY 6

// Use following printf's with necessary changes
/*
printf("Enter your numbers (-1 to finish):\n");
printf("Max capacity is reached! Cannot accept more numbers!\n");
printf("Number of evens: %d\n", _______);
printf("What type of numbers would you print?\n  > (0: for evens only, 1: for all numbers):");
printf("%d. %d\n",_______);

*/


// Please add your code below
int populate_array(int numbers[], int size) {
    int i = 0; 
    int num;
    printf("Enter your numbers (-1 to finish):\n");

    while (i < size) {
        scanf("%d", &num);
        
        if (num == -1) {
            break;
        } else {
            numbers[i] = num;
            i++;
        }

        if (i == size) {
            printf("Max capacity is reached! Cannot accept more numbers!\n");
        }
    }
    
    return i;
}

int get_even_count(int numbers[], int size_numbers) {
    int even_count = 0;

    for (int i = 0; i < size_numbers; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        }
    }

    return even_count;
}

int get_users_choice() {
    int choice;

    printf("What type of numbers would you print?\n  > (0: for evens only, 1: for all numbers):");
    scanf("%d", &choice);

    return choice;
}

int *filter_evens(int arr[], int size_numbers, int size_evens) {
    int *evens = (int *) malloc(sizeof(int) * size_evens);
    int index = 0;

    for (int i = 0; i < size_numbers; i++) {
        if (arr[i] % 2 == 0) {
            evens[index] = arr[i];
            index++;
        }
    }

    return evens;
}

void print_array_content(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %d\n", i + 1, arr[i]);
    }
} 


// WARNING: Do not modify the below part!

int main() {
    int numbers[CAPACITY];
    int size_numbers;
    int size_evens;

    size_numbers = populate_array(numbers, CAPACITY);
    
    size_evens = get_even_count(numbers, size_numbers);
    printf("Number of evens: %d\n", size_evens);

    int *evens = filter_evens(numbers, size_numbers, size_evens);
    int choice = get_users_choice();

    if(choice == 0) {
        print_array_content(evens, size_evens);
    } else {
        print_array_content(numbers, size_numbers);
    }

    free(evens);
    return EXIT_SUCCESS;
}