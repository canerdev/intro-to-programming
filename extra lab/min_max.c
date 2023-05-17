#include <stdio.h>
#include <stdlib.h>

double find_max(double nums[], int size) {
    double max = nums[0];

    for (int i = 1; i < size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    return max;
}

double find_min(double nums[], int size) {
    double min = nums[0];
    
    for (int i = 1; i < size; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}

int main() {
    int SIZE;

    // take the array size 
    printf("enter the size of the array: ");
    scanf("%d", &SIZE);

    // error check
    if (SIZE <= 0) {
        printf("Invalid input. \n");
        return 0;
    }

    // allocate memory
    double *nums = (double *)malloc(sizeof(double) * SIZE);

    // take the input
    printf("enter the array elements putting a space between each of them: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &nums[i]);
    }

    // print the array
    printf("the array is: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2lf", nums[i]);
        if (i < SIZE - 1) {
            printf(" | ");
        }
    }
    printf("\n");

    // find min and max
    double max = find_max(nums, SIZE);
    double min = find_min(nums, SIZE);

    // print the min and max
    printf("min: %.2lf\n", min);
    printf("max: %.2lf\n", max); 

    // free 
    free(nums);

    return EXIT_SUCCESS;
}