#include <stdio.h>
int i(int a, int b) {
    while (b >0) {
        int num = b;
        b = a % b;
        a = num;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / i(a, b);
}
int main() {
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d%d", &n,&m);
    int result = lcm(n, m);
    printf("LCM of %d and %d is %d\n", n, m, result);
    return 0;
}
