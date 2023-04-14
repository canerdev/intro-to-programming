/*
- A player rolls two dice.
– Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots.
– After the dice have come to rest, the sum of the spots on the two upward faces is calculated.
    • If the sum is 7 or 11 on the first throw, the player wins.
    • If the sum is 2, 3, or 12 on the first throw (called “craps”), the player loses (i.e., the “house” wins).
    • If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player’s “point.”
– To win, you must continue rolling the dice until you “make your point.”
– The player loses by rolling a 7 before making the point. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rollDice() {
    int dice1, dice2, sum;
    
    dice1 = rand() % 6 + 1; // generates a random number between 1 and 6 (both included)
    dice2 = rand() % 6 + 1;

    sum = dice1 + dice2;

    printf("player rolled %d + %d = %d\n", dice1, dice2, sum);

    return sum;
}

int main() {
    int sum, myPoints;
    bool playerWins, gameContinues;

    srand(time(NULL));
    sum = rollDice();

    switch(sum) {
        case 7:
        case 11:
            playerWins = true;
            break;
        case 2:
        case 3:
        case 12:
            playerWins = false;
            break;
        default:
            gameContinues = true;
            myPoints = sum;
            printf("point is: %d\n", myPoints);
            break;
    }

    while (gameContinues) {
        sum = rollDice();
        if (sum == myPoints) {
            playerWins = true;
            gameContinues = false;
        } else if (sum == 7) {
            playerWins = false;
            gameContinues = false;
        }
    }

    if (playerWins)
        printf("player wins!\n");
    else
        printf("playes loses!\n");

    return EXIT_SUCCESS;
}