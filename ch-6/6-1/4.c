#include <stdio.h>
#include <conio.h>

main()
{
    int a, n;
    clrscr();
    printf("Enter n:");
    scanf("%d", &n);

    while (a <= n)
    {
        if (n % 2 == 1)
        {
            printf("%d\n", n);
        }
        n--;
    }
    getch();
}