#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            (j == 1 || i == 1 && j == 4 || i == 7 && j == 4 || i == 2 && j == 6 || i == 6 && j == 6 || i == 3 && j == 7 || i == 5 && j == 7 || i == 4 && j == 7)
                ? printf("*")
                : printf(" ");
        }
        printf("\n");
    }
}