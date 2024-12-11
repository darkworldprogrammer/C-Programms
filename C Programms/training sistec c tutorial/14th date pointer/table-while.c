#include <stdio.h>

int main() {
    int i, j;
    printf("Multiplication Table:\n");
    
    // Print the top header row
    printf("    ");
    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Print the rows of the table
    for (i = 1; i <= 10; i++) {
        printf("%4d", i); // Print the left header column
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
