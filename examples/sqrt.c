#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERROR 1e-3

int main() {
    double guess = 1.0;
    double x;

    printf("enter a number to take the square root of: ");
    scanf("%lf", &x); 
    
    while (fabs(guess * guess - x) >= ERROR) { // fabs takes one input as type of double and returns in double
        guess = (guess + (x / guess)) / 2;
    }

    printf("Approximate square root of x is %.2lf.\n", guess);
    printf("Approximate square root of x is %.2lf.\n", sqrt(x));

    return EXIT_SUCCESS;
}