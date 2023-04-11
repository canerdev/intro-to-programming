#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for EXIT_SUCCESS

int main() {
    double weight, height, bmi;

    printf("Enter your weight (in kilograms): ");
    scanf("%lf", &weight);
    printf("Enter your height (in meters): ");
    scanf("%lf", &height);

    bmi = weight / (height * height);
    printf("Your bmi score is %.2lf.\n", bmi);

    return EXIT_SUCCESS;
}