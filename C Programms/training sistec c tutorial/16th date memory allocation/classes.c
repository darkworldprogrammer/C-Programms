// print using class
#include <stdio.h>
struct i{
    int a;
    float b;
    char c;
};
int main() {
    struct i i = { 22,34.2,'d'};
    printf(" a=%d\n b=%f\n c=%c\n",i.a,i.b,i.c);

    return 0;
}