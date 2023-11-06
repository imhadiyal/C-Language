#include <stdio.h>
#include <conio.h>

main()
{
    int a = 1, n;
    clrscr();

    printf("Enter n:");
    scanf("%d", &n);

    do
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    } while (a <= n);
    getch();
}