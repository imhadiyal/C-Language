#include <stdio.h>

main()
{
    int n = 5;
    int num;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("   ");
        }

        for (int k = 0; k < n - i; k++)
        {
            printf("%d ", num);
            num = 1 - num;
            (k % 2 == 0)
                ? printf(0)
                : printf(1);
        }

        printf("\n");
    }
}
