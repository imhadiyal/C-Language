#include <stdio.h>

int main() {
   int row,col;
   printf("enter a row:");
   scanf("%d",&row);
   printf("enter a col:");
   scanf("%d",&col);
printf("enter array:\n");
int a[row][col];
for (int i = 0; i < row; i++)
{
   for (int j = 0; j < col; j++)
   {
      printf("a[%d][%d]",i,j);
      scanf("%d",&a[i][j]);
   }
   
}
int large;
for (int i = 0; i < row; i++)
{
   for (int j = 0; j < col; j++)
   {
      if (a[i][j]>large)
      {
        large=a[i][j];
      }
      
   }
   
}
printf("largest number :%d",large);

    return 0;
}