#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *face; // define pointer face
    char *suit; // define pointer suit
} Card; // each struct must end with an semicolon

// without typedef 
// struct card {
//     char *face; 
//     char *suit; 
// };


int main() {
    // typedef struct card Card; // Card is now a synonym for type struct card
    Card aCard; // define one struct card variable

    // place strings into aCard
    aCard.face = "Ace";
    aCard.suit = "Spades"; 

    Card *cardPtr = &aCard; // assign address of aCard to cardPtr

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
        cardPtr->face, " of ", cardPtr->suit,
        (*cardPtr).face, " of ", (*cardPtr).suit);

    return EXIT_SUCCESS;
}

// passing structures by reference is more efficient than passing structures by value
