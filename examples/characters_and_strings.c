#include <stdio.h>
#include <stdlib.h>

// NOTES
// character = 'c' (single quotation)
// string = "a simple string!" (double quotation)
// a string is an array of characters ending the NULL character which is '\0'
// a string is accessed via a pointer to the first character in the string
// thus, in c, string is a pointer to the string's first character


int main() {
    // create an array and initialize it with the string "blue". null terminated is added automatically
    // char color[] = "blue"; 

    // create a pointer and initialie it with the memory address of the string literal "blue"
    // char *color = "blue";
    
    char name[20];
    scanf("%19s", name);
    // scanf will read characters until a space, tab, newline or end-of-file indicator is encountered
    // ALWAYS use a field with so that user input does not exceed the initialized number of characters which is 20 in this case. field with is 19 becasue the last one is the terminating character 

    printf("%s", name);
    return EXIT_SUCCESS;
}