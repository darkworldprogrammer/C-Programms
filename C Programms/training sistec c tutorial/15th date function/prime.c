#include <stdio.h>
int Prime(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}
int main() {
    int num;
        printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (Prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
    return 0;
}