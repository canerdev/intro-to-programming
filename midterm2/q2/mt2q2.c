#include <stdio.h>
#include <string.h>

#define MAX_LEN 30


// Please add your code below

void cut(const char *phrase, int n_parts, char parts[][MAX_LEN]) {
    int part_len = strlen(phrase) / n_parts;
    int phrase_len = strlen(phrase);

    int i, j;
    for (i = 0, j = 0; i < phrase_len; i += part_len, j++) {
        strncpy(parts[j], phrase + i, part_len); // Copy part_len characters from phrase to parts[j]
        parts[j][part_len] = '\0'; // Add null-terminator to the end of each part
    }
}

// WARNING: Do not modify the below part!

int main() {
    char phrase[MAX_LEN];
    char parts[MAX_LEN][MAX_LEN];
    int n_parts;

    printf("Enter phrase: ");
    scanf("%s", phrase);

    printf("Enter number of parts: ");
    scanf("%d", &n_parts);

    cut(phrase, n_parts, parts);
    for (int i = 0; i < n_parts; i++) {
        printf("|%s|\n", parts[i]);
    }

    return 0;
}
