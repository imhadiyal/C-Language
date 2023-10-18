#include <stdio.h>
int main()
{
    int col, row,sum=0;
    printf("enter row:");
    scanf("%d", &row);
    printf("enter col:");
    scanf("%d", &col);
    int a[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j==0||i==0||i==row-1||j==col-1)
            {
                printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
          
        }printf("\n");
      }
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           
                sum+=a[i][j];
          
          
        }
      }
printf("sum is array:%d",sum);
    return 0;
}
