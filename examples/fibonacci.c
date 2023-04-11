#include <stdio.h>
#include <stdlib.h>


int main() {
    int number_of_terms, next_term;
    int term1 = 1;
    int term2 = 1;

    printf("enter the number of terms: ");
    scanf("%d", &number_of_terms);

    printf("%d %d ", term1, term2);

    
    for (int i = 2; i < number_of_terms; i++) {
        next_term = term1 + term2;
        printf("%d ", next_term);
        term1 = term2;
        term2 = next_term;
    }

    return EXIT_SUCCESS;
}