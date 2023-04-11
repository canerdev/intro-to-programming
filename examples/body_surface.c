#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double weight; // in kg
    double height; // in cm 
    double bsa; // body surface area in m²
    
    printf("Enter the weight in kg: ");
    scanf("%lf", &weight);
    printf("Enter the height in cm: ");
    scanf("%lf", &height);

    bsa = 0.007184 * pow(weight, 0.425) * pow(height, 0.725);
    
    printf("The body surface area is %.2lf: \n", bsa);

    return EXIT_SUCCESS;
}