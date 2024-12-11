#include <stdio.h>

int main() {
    int a;
    int*ptr;
    ptr=&a;

         printf("%p\n", (void*)ptr);
          printf("%p\n", (void*)&a);


    return 0;
}