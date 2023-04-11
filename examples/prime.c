#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num1, num2;
    

    printf("enter two positive numbers you want to search for prime numbers in between: ");
    scanf("%d  %d", &num1, &num2);

    // swap numbers in case num2 is greater than num1
    if (num1 > num2) {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for (int num = num1 + 1; num < num2; num++) { 
        bool is_prime = true;

        if (num <= 0 || num == 1)
            continue;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime == true)
            printf("%d ", num);
    }

    return EXIT_SUCCESS;
}