// to find address of data
#include <stdio.h>
struct i{
    int a;
    float b;
    char c;
};
int main() {
    struct i i = { 22,34.2,'d'};
    printf(" a=%p, b=%p, c=%p",i.a,i.b,i.c);

    return 0;
}