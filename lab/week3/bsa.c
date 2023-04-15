#include <stdio.h>
#include <math.h>

int main() {
    float height, weight, bsa;
    printf("Input height(cm) and weight(g):");
    scanf("%f", &height);
    scanf("%f", &weight);

    bsa = 0.0003207 * pow(height, 0.3) * pow(weight, 0.7285 - (0.0188 * log10(weight)));

    printf("BSA: %.2f\n", bsa);
    return 0;
}