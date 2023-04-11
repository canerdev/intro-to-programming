#include <stdio.h>
#include <stdlib.h> // srand, rand, EXIT_SUCCESS
#include <time.h>
#include <stdbool.h> // boolean

#define N_ITERATIONS 1e5

int main() {
    srand(time(NULL));

    int strategy_1 = 0; // wins if stay 
    int strategy_2 = 0; // wins if change

    for (int x = 0; x < N_ITERATIONS; x++) {
        // sayilar cok buyuk oldugu icin modunu aldik 1 ile 3 arasinda sayilar aldik
        int selected_door = rand() % 3 + 1; 
        int PPcar_door = rand() % 3 + 1;
        
        int opened_door = 0;
        int unopened_door = 0;

        if (car_door != selected_door) {
            if ((car_door == 1) && (selected_door == 2)) {
                opened_door = 3;
                unopened_door = 1;
            }
            else if ((car_door == 1) && (selected_door == 3)) {
                opened_door = 2;
                unopened_door = 1;
            }
            else if ((car_door == 2) && (selected_door == 1)) {
                opened_door = 3;
                unopened_door = 2;
            }
            else if ((car_door == 2) && (selected_door == 3)) {
                opened_door = 1;
                unopened_door = 2;
            }
            else if ((car_door == 3) && (selected_door == 1)) {
                opened_door = 2;
                unopened_door = 3;
            }
            else if ((car_door == 3) && (selected_door == 2)) {
                opened_door = 1;
                unopened_door = 3;
            }
        }
        else {
            bool heads = rand() % 2 == 0; // 0 or 1 
            if (car_door == 1) {
                opened_door = heads ? 2 : 3;
                opened_door = heads ? 3 : 2;
            } else if (car_door == 2) {
                opened_door = heads ? 1 : 3;
                opened_door = heads ? 3 : 1;
            } else if (car_door == 3) {
                opened_door = heads ? 2 : 1;
                opened_door = heads ? 1 : 2;
            }
        }

        if (car_door == selected_door)
            strategy_1++;
        else if (car_door == unopened_door)
            strategy_2++;
    }

    double win_ratio1 = (double) strategy_1 / N_ITERATIONS;
    double win_ratio2 = (double) strategy_2 / N_ITERATIONS;

    printf("win ratio for strategy 1: %.3lf\n", win_ratio1);
    printf("win ratio for strategy 2: %.3lf\n", win_ratio2);

    return EXIT_SUCCESS;
}