#include <stdio.h>
#include <stdlib.h>

int main() {
    // UNORDERED

    // const int CAPACITY = 20;
    // int values[] = {123, 25, 234, 54, 4, 23};
    // int new_element;
    // int current_size = sizeof(values) / sizeof(int);

    // for (int i = 0; i < current_size; i++) {
    //     if (i == 0)
    //         printf("before the insertion: ");
        
    //     printf("%d", values[i]);

    //     if (i < current_size - 1)
    //         printf(" | ");
    //     else
    //         printf(" -- (current size: %d)\n", current_size);
    // } 

    // printf("enter the number you want to insert: ");
    // scanf("%d", &new_element);


    // if (current_size < CAPACITY) {
    //     current_size++;
    //     values[current_size - 1] = new_element;
    // }

    // for (int i = 0; i < current_size; i++) {
    //     if (i == 0)
    //         printf("after the insertion: ");
        
    //     printf("%d", values[i]);

    //     if (i < current_size - 1)
    //         printf(" | ");
    //     else
    //         printf(" -- (current size: %d)\n", current_size);
    // }


    // ORDERED

    const int CAPACITY = 20;
    int values[] = {123, 25, 234, 54, 4, 23};
    int new_element, index;
    int current_size = sizeof(values) / sizeof(int);

    for (int i = 0; i < current_size; i++) {
        if (i == 0)
            printf("before the insertion: ");
        
        printf("%d", values[i]);

        if (i < current_size - 1)
            printf(" | ");
        else
            printf(" -- (current size: %d)\n", current_size);
    } 

    printf("enter the number you want to insert and the index you want to insert the number at: ");
    scanf("%d %d", &new_element, &index);

    if (current_size < CAPACITY)
        current_size++;

    for (int i = current_size - 1; i > index; i--) {
        values[i] = values[i - 1]; 
        if (i == index + 1)
            values[i - 1] = new_element;
    }

    for (int i = 0; i < current_size; i++) {
        if (i == 0)
            printf("after the insertion: ");
        
        printf("%d", values[i]);

        if (i < current_size - 1)
            printf(" | ");
        else
            printf(" -- (current size: %d)\n", current_size);
    }

    return EXIT_SUCCESS;
}