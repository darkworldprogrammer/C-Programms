// #include <stdio.h>

// int main() {
//     int n;
//      printf("Enter the no: ");
//      scanf("%d",&n);
//        if(n%2==0){
//         for( int i=0; i<=n; i+=2){
//             printf("even no: %d\n",i);
//         }
//     }
//         else{
//             for(int i=1; i<=n; i+=2){
//                 printf("odd no: %d\n",i);
//             }} }

#include <stdio.h>
int main() {
    int n;
    printf("Enter the no: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (int i = 0; i <= n; i += 2) {
            printf("even no: %d\n", i);
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            printf("odd no: %d\n", i);
        }
    }
    return 0;
}
