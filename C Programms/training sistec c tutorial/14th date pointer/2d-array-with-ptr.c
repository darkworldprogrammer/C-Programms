#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void printArray(int (*arr)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3}
    };

    int (*ptrToArray)[COLS] = arr;

    printf("Array stored using pointer to array:\n");
    printArray(ptrToArray, ROWS, COLS);

    return 0;
}
