#include <stdio.h>
int main(){
    int a,b;
    printf("enter two  no : ");
    scanf("%d%d",&a,&b);
    if(b>a){
        printf("greater is : %d",b);
    }
    else{
        printf("greater is :  %d",a);
    }
}