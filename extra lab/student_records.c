#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

double findAverage(double *marks, int numStudents) {
    double sum = 0.0;

    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }

    return sum / double(numStudents);
}

int main() {
    int numStudents;

    // take the input
    pprintf("enter the number of the students: ");
    scanf("%d", &numStudents);

    // roll number
    int *roll_number = (int *)malloc(sizeof(int) * numStudents);
    // marks
    double *marks = (double *)malloc(sizeof(double) * numStudents);
    // name
    char **names = (char *)malloc(sizeof(char *) * numStudents);

    for (int i = 0; i < numStudents; i++) {
        names[i] = (char *)malloc(sizeof(char) * MAX_NAME_LENGTH);
    }

    // read the details for each students
    for (int i = 0; i < numStudents; i++) {
        printf("enter the details of the student %d", i + 1);
        printf("name: ");
        scanf("%s", names[i]);
        printf("roll number: ");
        scanf("%d", &roll_number[i]);
        printf("mark: ");
        scanf("%s", &marks[i]);
    }

    // find average
    double averageMark = 

    // find max mark with the student 
    return EXIT_SUCCESS;
}