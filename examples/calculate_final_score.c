#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// user enters the quiz scores, max 20 scores
// find the minimum quiz and remove it from the array
// then calculate the average 

int read_input(double data[], int capacity) {
    int size = 0;
    bool isFinished = false;
    
    while (!isFinished) {
        if (size == capacity)
            break;
        
        double input;
        printf("enter the %d. score (0 to quit): ", size + 1);
        scanf("%lf", &input);
        
        if (input == 0) {
            isFinished = true;
        } else if (size < capacity) {
            data[size] = input;
            size++;
        } 
    }

    return size;
}

int find_minimum_pos(double data[], int size) {
    int min_pos = 0;

    for (int i = 1; i < size; i++) {
        if (data[i] < data[min_pos])
            min_pos = i;
    }

    return min_pos;
}

void remove_element(double data[], int size, int pos) {
    // unordered
    data[pos] = data[size - 1];
}

double calculate_final_score(double data[], int size) {
    double result, sum = 0;

    for (int i = 0; i < size; i++) {
        sum += data[i];
    }

    result = sum / (double)size;

    return result;
}

int main() {
    const int CAPACITY = 20;
    double scores[CAPACITY];
    
    int size = read_input(scores, CAPACITY);
    int min_pos = find_minimum_pos(scores, size);

    remove_element(scores, size, min_pos);
    
    size--; // we removed an element so the size must be decreased 1

    double final_score = calculate_final_score(scores, size);

    printf("your final score is: %.2lf", final_score);

    return EXIT_SUCCESS;
}