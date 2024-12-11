#include <stdio.h>
#include <stdlib.h>

int main() {
 int *p,n;
 
    printf("Enter n value");
    scanf("%d",&n);
    p=(int*)malloc(n*2);
    printf("Enter integer");
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",p+i);
    }
    free(p);

    return 0;
}