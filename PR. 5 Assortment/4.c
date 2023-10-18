#include <stdio.h>

int main()
{
    int row, col;
    printf("enter a row:");
    scanf("%d", &row);
    printf("enter a col:");
    scanf("%d", &col);
    printf("enter array:\n");
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int r, rsum = 0;
    printf("enter row number:");
    scanf("%d", &r);

    for (int i = 0; i < row; i++)
    {

        if (r == i)
        {
            printf("element of row%d:", r);
            for (int i = 0; i < col; i++)
            {
                printf("%d", a[r][i]);

                rsum += a[r][i];
            }
            printf("\n");
            printf("The sum of row%d:%d\n", r, rsum);
        }
    }
    int c, csum = 0;
    printf("enter col number:");
    scanf("%d", &c);
    for (int i = 0; i < col; i++)
    {

        if (c == i)
        {
            printf("element of col%d:", c);
            for (int i = 0; i < row; i++)
            {
                printf("%d", a[i][c]);

                csum += a[c][i];
            }
            printf("\n");
            printf("The sum of col%d:%d\n", c, csum);
        }
    }
    return 0;
}