#include <stdio.h>

int main() {
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    if(n%2==0){
        printf("even no: %d",n);
    }
    else{
        printf("odd no:%d",n);
    }
}