// Online C compiler to run C program online
// {Q1} addition of two matrices 
// {Q2} write a program to store 10 rows and columns every index of 2d matrix with 5 row and 5 matrix 
#include <stdio.h>

int main() {
    int i,j,k,l,m,n;
int a[3][3]={10,20,30,40,50,60,70,80,90};
int b[3][3]={11,12,13,14,15,16,17,18,19};
int c[3][3];

printf("First matrix is:\n");
for (i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

  printf("\n\n");
  
printf("Second matrix is:\n");
for (k=0;k<=2;k++){
    for(l=0;l<=2;l++){
        printf("%d ",b[k][l]);
    }
    printf("\n");
}

  printf("\n\n");

printf("the sum of tow matrices:\n");
for (m=0;m<=2;m++){
    for(n=0;n<=2;n++){
        c[m][n]= a[m][n] + b[m][n];
        printf("%d ",c[m][n]);
    }
    printf("\n");
}
    return 0;
} 


