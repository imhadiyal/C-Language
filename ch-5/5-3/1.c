#include <stdio.h>
#include <conio.h>
#define P printf
#define S scanf
main()
{
    int a, b, c, minimum;
    clrscr();
    P("Enter a:");
    S("%d", &a);
    P("Enter b:");
    S("%d", &b);
    P("Enter c:");
    S("%d", &c);

    minimum = (a < b)
                  ? (a < c)
                        ? a
                        : c

              : (b < c)
                  ? b
                  : c;
    P("minimum: %d", minimum);
    getch();
}