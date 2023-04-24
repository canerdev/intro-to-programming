#include <stdio.h>
#include <stdlib.h>

double calculate_ln(double x, int n) {
    // n is the number of terms in the summation
    double result = 0;
    for (int i = 0; i < n; i++) {
        double nominator = 1;

        for (int j = 0; j < i + 1; j++) {
            nominator = nominator * x;
        }
        if (i % 2 == 0)
            result = result + (nominator / (double)(i + 1));
        else if (i % 2 != 0)
            result = result - (nominator / (double)(i + 1));
        nominator = 0;
    }
    return result;
}


int main() {
    // calculate ln(1 + x)
    double result = calculate_ln(5, 4);
    printf("result: %.2lf", result);
    return EXIT_SUCCESS;
}