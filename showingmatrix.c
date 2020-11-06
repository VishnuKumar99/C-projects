#include<stdio.h>
void main()
{
  int a[3][3];
  int i, j;

  printf("Enter the values of first matrix:\n");
  for (i = 0; i < 3;i++)
  {
    for (j = 0; j < 3;j++)
    {
      printf("\n matrix[%d][%d]:", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n Matrix is \n");
  for (i = 0; i < 3;i++)
  {
    for (j = 0; j < 3;j++)
    {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
}