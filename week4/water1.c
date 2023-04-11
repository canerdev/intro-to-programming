#include <stdio.h>

int main() {
    int unit_temp;
    double temp;

    printf("Enter the temperature: ");
    scanf("%lf", &temp);

    printf("Enter the unit of temperature (Celsius:1, Fahrenheit:2): ");
    scanf("%d", &unit_temp);

    
    // for celsius
    if (unit_temp == 1) { 
        if (temp <= 0) {
            printf("Water is Solid (Ice) at %.2lf degrees Celsius\n", temp);
        } else if (temp < 100 && temp > 0) {
            printf("Water is Liquid at %.2lf degrees Celsius\n", temp);
        } else {
            printf("Water is Gas (Vapor) at %.2lf degrees Celsius\n", temp);
        }
    } else if (unit_temp == 2) { // for fahrenheit
        if (temp <= 32) {
            printf("Water is Solid (Ice) at %.2lf degrees Fahrenheit\n", temp);
        } else if (temp < 212 && temp > 32) {
            printf("Water is Liquid at %.2lf degrees Fahrenheit\n", temp);
        } else {
            printf("Water is Gas (Vapor) at %.2lf degrees Fahrenheit\n", temp);
        }
    } else {
        printf("Please enter temperature unit as either 1 (celsius) or 2 (fahrenheit).\n");
        return 1; // fail
    }

    return 0; // success
}