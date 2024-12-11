#include <stdio.h>

int add(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return add(++a, --b);
    }
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    int result = add(a, b);
    printf("Addition of first and second numbers: %d\n", result);

    return 0;
}
