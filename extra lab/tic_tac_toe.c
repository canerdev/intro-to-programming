#include <stdio.h>
#include <stdlib.h>

int main() {
    char game_board[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d. row %d. column: ", i + 1, j + 1);
            scanf(" %c", &game_board[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d. line: %c %c %c\n", i + 1, game_board[i][0], game_board[i][1], game_board[i][2]);
    }

    // check validity

    return EXIT_SUCCESS;
}