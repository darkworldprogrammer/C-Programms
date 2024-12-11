// Online C compiler to run C program online
#include <stdio.h>
union i{
    int a;
    float b;
    char c;
};

int main() {
    union i d;
    d.a=15;
    
    printf("value stored in a is:%d",d.a);

    return 0;
}