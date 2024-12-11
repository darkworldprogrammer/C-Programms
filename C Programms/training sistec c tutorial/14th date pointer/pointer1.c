// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    int a=5;
   int *p;
   int **q;
    p=&a;
     q=&p;
    
    printf(" %d\n %p\n %p\n",a,p,q);
    return 0;
}