#include <stdio.h>
int main()
{
    char name[0];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}