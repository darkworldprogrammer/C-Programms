#include<stdio.h>
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf("Matrix after 90 rotation :\n");
for(int i=0;i<3;i++)
{
    for(int j=3-1;j>=0;j--)
    {
        printf("%d ",a[j][i]);
    }
    printf("\n");
}

return 0;
}