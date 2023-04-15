#include <stdio.h>
#include <math.h>

#define ERROR 1e-3
#define EPSILON 1e-3

int main() {
    double a, b, c, x, y, y1, y2, m;

    scanf("%lf %lf %lf", &a, &b, &c);

    x = 1; // initial point

    while (fabs(a * x * x + b * x + c) > ERROR) {
        y1 = a * (x + EPSILON) * (x + EPSILON) + b * (x + EPSILON) + c;
        y2 = a * (x - EPSILON) * (x - EPSILON) + b * (x - EPSILON) + c;
        // y1 - y2 = m(x2 - x1)
        m = (y1 - y2) / (2 * EPSILON);

        if (m == 0)
            m += EPSILON;

        y = a * x * x + b * x + c;
        x = x - y / m;
    }

    printf("Root: %.2lf\n", x);

    return 0;
}