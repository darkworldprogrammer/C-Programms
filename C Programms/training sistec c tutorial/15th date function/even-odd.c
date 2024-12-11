#include <stdio.h>
int a(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("%d is %s.\n", num, a(num) ? "even" : "odd");

    return 0;
}
