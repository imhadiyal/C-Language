#include <stdio.h>
main()
{
    int n, a = 1;

    printf("enter n:");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        a += a;
        printf("%d\n", a);
    }
}