#include <stdio.h>
#include <stdlib.h>

// creating a sequential file

int main() {
    FILE *cfPtr; // cfPtr: clients.txt file pointer

    // fopen opens file. exit program if unable to create file
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened");
    } else {
        puts("enter the account number, name and balance.");
        puts("enter EOF to end input."); // ctrl + z
        printf("%s", "  > ");

        unsigned int account; // account number
        char name[30]; // account name
        double balance; // account balance

        scanf("%d%29s%lf", &account, name, &balance); // 29 for the terminating character (30 - 1)

        // write account number, name and balance into file with fprintf
        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "  > ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // close every file you open after you are done with them
    }

    // reading and printing a sequential file
    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened");
    } else {
        unsigned int account; // account number
        char name[30]; // account name
        double balance; // account balance

        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); // fscanf receives a file pointer for the file being read

        // write account number, name and balance into file with fprintf
        while (!feof(cfPtr)) {
            printf("%-10d%-13s%7.2lf\n", account, name, balance);
            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // close every file you open after you are done with them
    }
    return EXIT_SUCCESS;
}

// NOTES
// cfPtr is a pointer to the FILE structure
// fopen("filename", "file open mode")
// if a file does not exist for writing, fopen creates the file. however, if an existing file is opened for writing, the content of it is discarded
// feof to determine whether the end-of-file indicator is set for the file to which stdin refers. feof returns true if EOF maker is set, otherwise it returns zero (false i.e.)
// fprintf("a file pointer", ....) stdout for the file pointer if you want to output data to the standart output
// "w" to create file, to writing into a file or to discard its content
// "r" to read an existing file
// "a" to append into the end of an existing file
// "r+" to open an existing file for update (reading and writing)
// "w+" to open or create for reading and writing. if already exists, discard its content
// "a+" open or create a file for reading and updating. all writing is done at the end of the file 
// for processing in binary mode: rb, wb, ab, rb+, wb+, ab+
// opening a nonexisting file for reading is an error
