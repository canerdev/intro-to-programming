#include <stdio.h>
#include <stdlib.h>

#define MEDALS 3

void row_totals(int data[][MEDALS], int row) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < MEDALS; j++) {
            sum += data[i][j];
        }
        printf("sum of the %d. row is: %d\n", i + 1, sum);
    }
}

void column_totals(int data[][MEDALS], int row) {
    for (int i = 0; i < MEDALS; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += data[j][i];
        }
        printf("sum of the %d. column is: %d\n", i + 1, sum);
    }
}

int main() {
    // const int COUNTRIES = 5;
    // const int MEDALS = 3; // gold - silver - bronze

    int data[][MEDALS] = {{23, 3, 52}, {12, 4, 24}};

    // row_totals(data, 2);

    column_totals(data, 2);
    
    return EXIT_SUCCESS;
}