// #include <stdio.h>
// int main(){
//     printf("hello world");
//     return 0;
// }



// // addition
// #include <stdio.h>
// int main(){

// int n1,n2,sum;
// printf("Enter Two Numbers ");

// scanf("%d%d",&n1,&n2);
// sum=n1+n2;
// printf("%d+%d=%d",n1,n2,sum);
// return 0;
// }

// // substraction
// #include <stdio.h>
// int main(){

// int n1,n2,sub;
// printf("Enter Two Numbers ");

// scanf("%d%d",&n1,&n2);
// sub=n1-n2;
// printf("%d-%d=%d",n1,n2,sub);
// return 0;
// }


// // multiplication
// #include <stdio.h>
// int main (){
// int a,b,num;
// printf("Enter Two No.");
// scanf("%d%d",&a,&b);
// num=a*b;
// printf("%d*%d=%d",a,b,num);
// return 0;
// }



// #include <stdio.h>
// int main(){
// int a,b,c,d,e,sum;
// printf("Enter Numbers ");
// scanf("%d%d",&a,&b,&c,&d);
// a=a+b;
// a=a-b;
// a=a*b;
// a=a/b;

// printf("%d+%d=%d",a,b,c,d,a);
// return 0;
// }


// // Increment
// #include <stdio.h>
// int main()
// {
//     int i=50;
//     i++;
//     printf("%d",i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// printf("%lu\n",sizeof(char));
// printf("%lu\n",sizeof(int));
// printf("%lu\n",sizeof(float));
// printf("%lu\n",sizeof(double));
// return 0;
// }

// #include <stdio.h>
// int main(){
//     printf("%lu",sizeof(char));
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i= sizeof(char);
//         int j= sizeof(int);
//             int k= sizeof(float);
//                 int l= sizeof(double);
//     printf("%d\n",i);
//         printf("%d\n",j);
//             printf("%d\n",k);
//                printf("%d\n",l);
//     return 0;
// }






// // even
// #include <stdio.h>
// int main() {
//    int a;
//     printf("Enter any number:");
//    scanf("%d", &a);
//    if (a%2==0){
//    printf("number is a even");
//    }
//     return 0;
// }



// // // even or odd
// #include <stdio.h>
// int main() {
//    int a;
//     printf("Enter any number:");
//    scanf("%d", &a);
//    if (a%2==0){
//    printf("number is a even");
//    }
//   else{
//    printf("number is a odd ");
//   }
//     return 0;
// }





// // // grading System
// #include <stdio.h>
// int main() {
//    int a,b,c,d,e;
//    int p;
//  printf("Enter Marks of Eng");
//  scanf("%d",&a);
//   printf("Enter Marks of hindi");
//  scanf("%d",&b);
//   printf("Enter Marks of math");
//  scanf("%d",&c);    
//   printf("Enter Marks of science");
//  scanf("%d",&d);
//   printf("Enter Marks of sanskrit");
//  scanf("%d",&e);
// p = (a+b+c+d+e)/5;

//     if (p>75){
//    printf("student passed with grade A+");
//    }
//   else if(p<75 && p>50){
//    printf("student passed with B grade");
//   }
//     else if(p<50 && p>33){
//    printf("student passed with C grade");
//   }
//     else {
//    printf("student Fail");
//   }
//     return 0;
// }





// // // leap year

// #include <stdio.h>
// int main() {
//    int a;
//     printf("Enter the Year:");
//    scanf("%d", &a);
//    if (a%4==0){
//    printf("It is Leap Year");
//    }
//    else{
//       printf("It is General Year");
//    }
//     return 0;
// }


// // // Voting
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter Your age:");
//     scanf("%d",&n);
//     if(n>=18){
//         printf("Eligible for vote");
//     }
//     else{
//              printf("Not Eligible for vote");
//     }
//     return 0;
// }



// // increment
// #include <stdio.h>
// int main ()
// {
//     int i;
// for(i=1;i<=5;i++){
//     printf("\n%d",i);
// }
// return 0;
// }


// // increment while loop
// #include <stdio.h>
// int main ()
// {
//     int i=0;
// while(i<=5){
//     printf("\n%d",i);
//     i++;
// }
// return 0;
// }


// // decrement  while loop
// #include <stdio.h>
// int main ()
// {
//     int i=10;
// while(i>=1){
//     printf("\n%d",i);
//     i--;
// }
// return 0;
// }


// Q1)write a program to display first 10 natural number and sum all the natural number
// Q2)write a program to read 10 number from the keyboard and find their sum and average
// Q3)write a program to display the cube of the number 
// Q4)write a program to print the multiply table vertically
// Q5)write a program to display the n term of odd number and their sum


// // Natural numbers
// #include <stdio.h>
// int main ()
// {
//     int i, b=0;
//     printf("the first 10 natural numbers is: \n");
// for(i=1;i<=10;i++){
//     b=i+b;
//     printf("\n%d",i);
// }

// printf("\n The sum is:%d\n",b);
// return 0;
// }



// // multiply
// #include <stdio.h>
// int main() {
//   int n;
//   n==2;
//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   for (int i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n", n, i, n * i);
//   }
//   return 0;
// }



// // cube
#include <stdio.h>
int main()
{
  int i, j;
  j==1;
  printf("input numb of terms: ");
  scanf("%d",&j);
  for (i=j;i<=j;i++){
    printf("num is:%d and cube is  %d\n",i,(i*i*i));
  }
  return 0;
}
