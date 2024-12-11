// area of circle(πr2)
#include <stdio.h>
float area(float a) {
    return 3.14*(a*a);
}
int main() {
    float a;
    printf("Enter the area: ");
    scanf("%f*%f", &a);
       
        float result = area(a);
    printf("area is: %f\n", result);
    return 0;
}
