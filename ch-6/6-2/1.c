#include <stdio.h>
#include <conio.h>

main()
{
    int i = 1;
    clrscr();

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    getch();
}