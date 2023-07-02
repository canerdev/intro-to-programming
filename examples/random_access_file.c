#include <stdio.h>
#include <stdlib.h>

// creating a random access file sequentially

struct clientData {
    unsigned int accNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main() {
    FILE *cfPtr;

    cfPtr = fopen("accounts.dat", "rb+");

    if (cfPtr == NULL) {
        puts("File could no be opened!");
    } else {
        struct clientData client = {0, "", "", 0.0};

        // output 100 blank records to file
        for (int i = 0; i < 100; i++) {
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);
        }

        rewind(cfPtr);
        
        printf("%s", "Enter account number (1 to 100, 0 to end input): ");
        scanf("%d", &client.accNum);

        while (client.accNum != 0) {
            // user enters last name, first name and balance
            printf("%s", "\nEnter lastname, firstname and balance:\n");

            // set record the data
            fscanf(stdin, "%14s%9s%lf", client.lastName, client.firstName, &client.balance);

            // seek position in file to user-specified record
            fseek(cfPtr, (client.accNum - 1) * sizeof(struct clientData), SEEK_SET); // the value "(client.accNum - 1) * sizeof(struct clientData)" is called offset or the displacement. 1 is subtracted bc byte positions in file start with 0

            // write user-specified information in file
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "\nEnter account number: ");
            scanf("%d", &client.accNum);
        }

        rewind(cfPtr);
        printf("%-6s%-16s%-11s%10s", "Acct", "Last Name", "First Name", "Balance\n");

        while (!feof(cfPtr)) {
            struct clientData client = {0, "", "", 0.0};

            // fread returns the number of items it successfully input
            int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

            // display record
            if (result != 0) {
                printf("%-6s%-16s%-11s%10s\n", client.accNum, client.lastName, client.firstName, client.balance);
            }
        }

        fclose(cfPtr);
    }

    return EXIT_SUCCESS;
}

// a positive offset seeks forward and vice versa
// SEEK_SET -> seek starts at the beginning
// SEEK_CUR -> seek starts at the current position
// SEEK_END -> seek starts at the end of the file