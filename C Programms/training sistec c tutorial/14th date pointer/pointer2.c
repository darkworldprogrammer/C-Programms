#include <stdio.h> 
int main(){ 
    int arr[5]; 
    int n, i; 
    int * ptr = arr; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter elements :\n"); 
    for (i = 0; i < n; i++) { 
        scanf("%d", ptr); ptr++; 
        
    } 
    ptr = &arr[5]; 
    printf("address of array is: "); 
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", *ptr); 
        ptr++; 
           } 
    return 0; 
    
}