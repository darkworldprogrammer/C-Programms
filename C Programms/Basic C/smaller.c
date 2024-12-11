#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("smaller is: %d",a);
    }
    else{
        printf("smaller is:%d",b);
    }
}