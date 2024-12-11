#include <stdio.h>
#include <string.h>
char* digitToWord(int digit) {
    switch(digit) {
        case 0:
            return "Zero";
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        default:
            return "Invalid digit";
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char numStr[20];
    sprintf(numStr, "%d", num);

    printf("Number in words: ");
    for(int i = 0; i < strlen(numStr); i++) {
        printf("%s ", digitToWord(numStr[i] - '0'));
    }
    printf("\n");

    return 0;
}
