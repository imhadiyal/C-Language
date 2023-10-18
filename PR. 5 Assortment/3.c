#include <stdio.h>
int main()
{
    int rc,hd;
    printf("enter a row & col:");
    scanf("%d", &rc);
    scanf("%d", &hd);
    int a[rc][hd];
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < hd; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     printf("matrix:\n");
      for (int i = 0; i <rc; i++)
    {
        for (int j = 0; j < hd; j++)
        {
            
            printf("%d",a[i][j]);
          
        }
          printf("\n");
    }
    printf("transpose:\n");
     for (int i = 0; i <rc; i++)
    {
        for (int j = 0; j < hd; j++)
        {
            
            printf("%d",a[j][i]);
          
        }
          printf("\n");
    }
    

    return 0;
}
