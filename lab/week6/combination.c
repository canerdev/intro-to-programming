#include <stdio.h>
#include <stdlib.h> // for EXIT_SUCCESS
#include <time.h>

// n'i r kadar azalt 
int combination(int n, int r) {
    int i;
    int numerator = n;
    int denominator = r;

    if (r == 1)
        return n;
    else if (r == 0)
        return 1;

    for (i = 1; i < r; i++) {
        numerator *= (n - i);
    }

    for(i = 1; i < r; i++) {
        denominator *= (r - i);
    }

    return (numerator / denominator);
}

int main() {
    int n, r, result;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    // clock_t begin = clock();
    result = combination(n, r);
    // clock_t end = clock();
    
    // printf("Time consumed: %f\n", (double)((end - begin)/CLOCKS_PER_SEC));

    printf("%d\n", result);

    return EXIT_SUCCESS;
}