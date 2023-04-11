#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2;
    printf("Enter 3 coefficients for second-order polynomial:");
    scanf("%f %f %f", &a, &b, &c);
    
    discriminant = b * b - (4 * a * c);
    x1 = ((-b) + sqrt(discriminant)) / (2 * a);
    x2 = ((-b) - sqrt(discriminant)) / (2 * a);

    printf("Roots: x1: %.2f, x2: %.2f\n", x1, x2);
    return 0;
}