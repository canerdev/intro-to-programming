#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *cfPtr;

    cfPtr = fopen("clients.txt", "r");

    if (cfPtr == NULL) {
        puts("File could not be opened");
    } else {
        // display request options
        printf("%s", "Enter request\n"
            "1 - list of accounts with zero balances\n"
            "2 - list of accounts with credit balances\n"
            "3 - list of accounts with debit balances\n"
            "4 - end of run\n");

        unsigned int request;
        scanf("%u", &request);

        while (request != 4) {
            unsigned int account;
            double balance;
            char name[30];

            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

            switch (request) {
                case 1:
                    puts("\nAccounts with zero balances:");

                    // read file contents until eof
                    while (!feof(cfPtr)) {
                        // output only if balance is zero 
                        if (balance == 0) {
                            printf("%-10d%-13s%7.2lf\n", account, name, balance);
                        }

                        // read the next line 
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
            
                    break;

                case 2:
                    puts("\nAccounts with credit balances:");

                    // read file contents until eof
                    while (!feof(cfPtr)) {
                        // output only if balance is less than zero 
                        if (balance < 0) {
                            printf("%-10d%-13s%7.2lf\n", account, name, balance);
                        }

                        // read the next line 
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
            
                    break;

                case 3:
                    puts("\nAccounts with debit balances:");

                    // read file contents until eof
                    while (!feof(cfPtr)) {
                        // output only if balance is greater than zero 
                        if (balance > 0) {
                            printf("%-10d%-13s%7.2lf\n", account, name, balance);
                        }

                        // read the next line 
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
            
                    break;
            }

            rewind(cfPtr); // return cfPtr to beginning of the file

            printf("%s", "\n? ");
            scanf("%u", &request);
        }

        puts("End of run!");
        fclose(cfPtr); // close the file
    }

    return EXIT_SUCCESS;
}