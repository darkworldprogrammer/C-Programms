#include <stdio.h>
int main() {
  int arr[10][10], transpose[10][10], a, b;
  printf("Enter the rows and columns: ");
  scanf("%d %d", &a, &b);
  printf("\nEnter the elements :\n");
  for (int i = 0; i < a;++i)
  for (int j = 0; j < b;++j){
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &arr[i][j]);
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < a; ++i)
  for (int j = 0; j < b; ++j) {
    printf("%d  ", arr[i][j]);
    if (j == b - 1)
    printf("\n");
  }
  for (int i = 0; i < a; ++i)
  for (int j = 0; j < b; ++j) {
    transpose[j][i] = arr[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < b; ++i)
  for (int j = 0; j < a; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == a - 1)
    printf("\n");
  }
  return 0;
}
