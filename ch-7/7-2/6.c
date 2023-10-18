#include <stdio.h>

main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        int num = n;
        for (int k = n - i; k >= 1; k--)
        {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }
}
