//BLG102E - MOCK EXAM

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 50

int strlength(char *string, char subLengthChar, char getFullLength)
{
    char terminatingChar;

    if(getFullLength == 'y')
        terminatingChar = '\0'; //what is the null character of a string?
    else terminatingChar = subLengthChar;

    int i;
    //count until the terminatingChar AND the null character IS NOT reached.
    for(i = 0; string[i] != terminatingChar; i++);

    return i;
}

int main()
{
    /*
    The following code should ask user for a string and a prompt if they wants to 
    get the full length of the string or the length up to a certain character. 
    
    If they asks for the full length, the code just returns the length of the string. 
    
    Otherwise, the code should ask for a character and return the length of the string 
    up to that character. ***If the character does not exist in the string, the code should
    return the length of the string.***
    */

	char string[MAX_STRING_LENGTH]; //Declare a string variable with a max buffer of MAX_STRING_LENGTH (1)
    char getFullLength; //A character to get the prompt (y/n) (2)
    char terminatingChar; //Declare a character to get the length up to it (3)

	printf("Enter a string:");
	scanf("%s", string); //get the string from the user (1)

    printf("Get the full length of the string? (y/n):");
    scanf(" %c", &getFullLength); //get the prompt from the user (2)

    if(getFullLength != 'y')
    {
        printf("Enter a character to get the length up to it:");
        scanf(" %c", &terminatingChar); //(3)
    }

    //print the length of the string here
    int length = strlength(string, terminatingChar, getFullLength);
    printf("The length of the string is: %d\n", length);

	return 0;
}
