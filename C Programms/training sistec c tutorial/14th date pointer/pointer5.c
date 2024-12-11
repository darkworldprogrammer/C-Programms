#include <stdio.h>

int main() {
char a[8]="himanshu";
    
    
    void *ptr = &a;

    printf("%c\n", *(char*)ptr);
    
    return 0;
}
