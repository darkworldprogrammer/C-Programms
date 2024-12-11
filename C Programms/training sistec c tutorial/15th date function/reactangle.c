// area of reactangle(length * breadth)
#include <stdio.h>
int area(int l, int b) {
    return l*b;
}
int main() {
    int l,b;
        printf("Enter the Length: ");
            scanf("%d", &l);
        printf("Enter the Breadth: ");
            scanf("%d",&b);
       
        int result = area(l,b);
    printf("area of reactangle is: %d\n", result);
    return 0;
}
