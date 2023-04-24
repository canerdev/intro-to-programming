#include <stdio.h>
#include <stdlib.h>

int mystery(int n) {
    while (n > 9) {
        n =  n / 10;
    }

    return n;
}

int digits(int n) {
    int digits = 0;
    while (n > 9) {
        n = n / 10;
        digits++;
    }
    if (n < 10)
        digits++;

    return digits;
}

void do_while(int n) {
    double x = 0;
    double s;
    do {
        s = 1.0 / (1 + n * n);
        n++;
        x = x + s;
    } while (s > 0.01);

    printf("do while: %lf\n", s);
}

void just_while(int n) {
    double x = 0;
    double s = 1.0 / (1 + n * n);
    while (s > 0.01) {
        n++;
        x = x + s;
        s = 1.0 / (1 + n * n);
    }

    printf("just while: %lf\n", s);
}

double calculate_ln(double x, int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double nominator = 1;

        for (int j = 0; j < i + 1; j++) {
            nominator = nominator * x;
        }
        if (i % 2 == 0)
            result = result + (nominator / (double)(i + 1));
        else if (i % 2 != 0)
            result = result - (nominator / (double)(i + 1));
        nominator = 0;

    }
    return result;
}


int main() {
    // int result = digits(45);
    // printf("result: %d", result);


    // book price
    // int books, shipping_charge;
    // double price, tax;

    // printf("enter the total book price and the number of books: ");
    // scanf("%lf %d", &price, &books);

    // tax = (price / 100) * (75.0 / 10);
    // shipping_charge = 2 * books;

    // price = price + tax + (double)shipping_charge;

    // printf("the price of the order: $%.2lf\n", price);


    // convert do while into while 

    // do_while(3);
    // just_while(3);


    // calculate ln(1 + x)
    double result = calculate_ln(5, 4);
    printf("result: %.2lf", result);
    return EXIT_SUCCESS;
}