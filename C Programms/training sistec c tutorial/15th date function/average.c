#include <stdio.h>
float Avg(int num1, int num2, int num3, int num4, int num5);

int main() {
    int n1,n2,n3,n4,n5;
    float average;
    printf("Enter five numbers:  ");
    scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);

    average = Avg(n1, n2, n3,n4,n5);
    printf("The average is: %.2f\n", n1, n2, n3,n4,n5, average);
    return 0;
}
float Avg(int num1, int num2, int num3, int num4, int num5) {
    float sum = num1 + num2 + num3 + num4 + num5;
    return sum / 5;
}
