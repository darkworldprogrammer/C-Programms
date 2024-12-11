#include <stdio.h>

int main() {
    int a=5;
    int*ptr;
    ptr=&a;
     printf("%d\n",*ptr);
       printf("%d\n",ptr);
         printf("%d\n",&a);

    return 0;
}