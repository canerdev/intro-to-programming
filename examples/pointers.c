#include <stdio.h>
#include <stdlib.h>
 
void withdraw(double* main, double* target, double amount) {
    *main -= amount;
    *target += amount;
}

void add(double* main, double* target, double amount) {
    *main += amount;
    *target -= amount;
}  

int main() {
    double main_account = 2000;
    double target_account = 500;

    printf("default ------ main account: %.2lf, target account: %.2lf\n", main_account, target_account);

    withdraw(&main_account, &target_account, 500); // send the address as the parameter
    
    printf("after the withdrawal ------ main account: %.2lf, target account: %.2lf\n", main_account, target_account);

    add(&main_account, &target_account, 2000);

    printf("after the withdrawal ------ main account: %.2lf, target account: %.2lf\n", main_account, target_account);


    return EXIT_SUCCESS;
}