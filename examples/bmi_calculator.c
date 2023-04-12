#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for EXIT_SUCCESS

int main() {
    double weight, height, bmi;

    printf("Enter your weight (in kilograms): ");
    scanf("%lf", &weight);
    printf("Enter your height (in meters): ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    if (bmi < 16)
        printf("BMI Score: %.2lf - Severe thinnes\n", bmi);
    else if (bmi < 18.5)
        printf("BMI Score: %.2lf - Moderate thinnes\n", bmi);
    else if (bmi <= 25)
        printf("BMI Score: %.2lf - Normal\n", bmi);
    else if (bmi <= 30)
        printf("BMI Score: %.2lf - Overweight\n", bmi);
    else
        printf("BMI Score: %.2lf - Obese\n", bmi);
        
    return EXIT_SUCCESS;
}