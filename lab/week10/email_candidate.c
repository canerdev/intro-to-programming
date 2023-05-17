#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int strlength(char str[]) {
    int i = 0;

    // while (*str) {
    //     i++;
    //     str++;
    // }

    while (str[i]) {
        i++;
    }

    return i;
}

char* strcopy(char *destination, char *source) {
    int i = 0;
    char *dest = destination;

    while (source[i]) {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; // must be single quote

    return dest;
}

char* strconcatenate(char *destination, char *source) {
    char *dest = destination;
    int i = strlength(dest);
    int j = 0;

    while (source[j]) {
        destination[j + i] = source[j];
        j++;
    }

    destination[j + i] = '\0';

    return dest;
}

char* substring(char *source, char *destination, int start, int size) {
    // start at 'start' and end at 'size - 1'

    // add exceeding case

    char *res = destination;
    int i = 0;

    while (start < size) {
        res[i] = source[start];
        start++;
        i++;
    }
    res[i] = '\0';

    return res;
    // return destination??
}

void swap(char *first, char *second) {
    char temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    char name[SIZE];
    char surname[SIZE];
    char birthyear[5];

    printf("Enter Your Name:");
    scanf("%s", name); // why no &
    printf("Enter Your Surname:");
    scanf("%s", surname); 
    printf("Enter Your Birthyear:");
    scanf("%s", birthyear); 

    // printf("%d", strlength(name));
    // char dest[SIZE];
    // printf("name: %s surname: %s destination: %s\n", name, surname, strcopy(dest, surname));
    // printf("fullname: %s\n", strconcatenate(name, surname));
    // printf("%s %s %s", name, surname, birthyear);

    // char dest[SIZE];
    // printf("substring: %s", substring(name, dest, 1, 3));

    swap(&name[2], &surname[2]);
    printf("name: %s surname: %s", name, surname);

    return EXIT_SUCCESS;
}