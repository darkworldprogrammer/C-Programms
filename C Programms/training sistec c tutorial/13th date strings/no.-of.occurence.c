#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char searchChar;
    int count = 0;
    printf("Enter 5 strings:\n");
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }
    printf("Enter a character to search: ");
    scanf(" %c", &searchChar);
    for (int i = 0; i < MAX_STRINGS; i++) {
        for (int j = 0; j < strlen(strings[i]); j++) {
            if (strings[i][j] == searchChar) {
                count++;
            }
        }
    }
    printf("The character '%c' occurs %d times in the input strings.\n", searchChar, count);

    return 0;
}
