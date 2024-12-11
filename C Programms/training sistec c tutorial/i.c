#include <stdio.h>
int main(){
    int i,j;
    int a[3][3];
    printf("Enter an elements: ");
    for(i=0;i<3;i++){
        for(i=0;i<3;i++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    return 0;
}