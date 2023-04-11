#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double getRandomNumber(double lower_limit, double upper_limit) {
    // rand() / RAND_MAX ==> generates a number between 0 and 1 
    return lower_limit + (upper_limit - lower_limit) * (float)rand() / RAND_MAX;
}

double calculatePi(int max_iteration) {
    double x, y;
    int inside_the_circle = 0;

    for (int i = 0; i < max_iteration; i++) {
        x = getRandomNumber(1, -1);
        y = getRandomNumber(1, -1);

        if (x * x + y * y <= 1)
            inside_the_circle++;
    }

    return (inside_the_circle * 4.0) / max_iteration;
}

int main() {
    int max_iteration = 100000;
    srand(time(NULL));

    double pi = calculatePi(max_iteration);
    printf("Mean Value of 100 Estimated Pi's = %.1lf", pi);
    
    // double mean = 0;
    // int number_of_trials = 100;
    
    // for (int i = 0; i < number_of_trials; i++) {
    //     mean += calculatePi(max_iteration);
    // }
    // .......
    
    return EXIT_SUCCESS;
}