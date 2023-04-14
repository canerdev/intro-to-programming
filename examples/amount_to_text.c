#include <stdio.h>
#include <stdlib.h>

/* 
turns a number into its english name
@param number a positive integer < 1.000
*/ 

void print_digit(int number) {
    if (number == 1)
        printf("one");
    else if (number == 2)
        printf("two");
    else if (number == 3)
        printf("three");
    else if (number == 4)
        printf("four");
    else if (number == 5)
        printf("five");
    else if (number == 6)
        printf("six");
    else if (number == 7)
        printf("seven");
    else if (number == 8)
        printf("eight");
    else if (number == 9)
        printf("nine");
}

void print_tens(int number) {
    if (number == 10)
        printf("ten");
    else if (number == 11)
        printf("eleven");
    else if (number == 12)
        printf("twelve");
    else if (number == 13)
        printf("thirteen");
    else if (number == 14)
        printf("fourteen");
    else if (number == 15)
        printf("fifteen");
    else if (number == 16)
        printf("sixteen");
    else if (number == 17)
        printf("seventeen");
    else if (number == 18)
        printf("eighteen");
    else if (number == 19)
        printf("nineteen");
}

void print_teens(int number) {
    if (number >= 90)
        printf("ninety");
    else if (number >= 80)
        printf("eighty");   
    else if (number >= 70)
        printf("seventy");   
    else if (number >= 60)
        printf("sixty");   
    else if (number >= 50)
        printf("fifty");   
    else if (number >= 40)
        printf("fourty");   
    else if (number >= 30)
        printf("thirty");   
    else if (number >= 20)
        printf("twenty");       
}

int main() {
    int number;

    printf("enter an amount between 0 and 1000 to turn it into its english name: ");
    scanf("%d", &number);

    if (number <= 0 || number >= 1000) {
        printf("enter a valid amount (0 - 1000): ");
        scanf("%d", &number);
    }

    // 0-9
    if (number < 10)
        print_digit(number);
    // 10-19
    else if (number < 20)
        print_tens(number);
    // 20-99
    else if (number < 100) {
        print_teens(number);
        printf(" ");
        print_digit(number % 10);
    }
    // 100-999
    else if (number < 1000) {
        print_digit(number / 100);
        printf(" hundred");
        
        if (number % 100 != 0)
            printf(" and ");
        
        print_teens(number % 100);

        if (number % 100 > 10)
            printf(" ");
        
        print_digit(number % 10);
    }

    return EXIT_SUCCESS;
}