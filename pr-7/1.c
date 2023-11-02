#include <stdio.h>

#define P printf
#define S scanf

main()
{
    int a, b, c, darshan;
next:
    P("\n\npress 1 for +\n");
    P("press 2 for -\n");
    P("press 3 for *\n");
    P("press 4 for /\n");
    P("press 5 for %%\n");
    P("press 0 for EXIT\n");
    P("enter your choice:");
    S("%d", &darshan);

    switch (darshan)
    {

    case 1:
        P("Enter a:");
        S("%d", &a);
        P("Enter b:");
        S("%d", &b);
        c = (a + b);
        P("\n\nSum of %d and %d is : %d", a, b, c);
        goto next;

    case 2:
        P("Enter a:");
        S("%d", &a);
        P("Enter b:");
        S("%d", &b);
        c = (a - b);
        P("\n\nSub of %d and %d is : %d", a, b, c);
        goto next;

    case 3:
        P("Enter a:");
        S("%d", &a);
        P("Enter b:");
        S("%d", &b);
        c = (a * b);
        P("\n\nmul of %d and %d is : %d", a, b, c);
        goto next;

    case 4:
        P("Enter a:");
        S("%d", &a);
        P("Enter b:");
        S("%d", &b);
        c = (a / b);
        P("\n\ndiv of %d and %d is : %d", a, b, c);
        goto next;

    case 5:
        P("Enter a:");
        S("%d", &a);
        P("Enter b:");
        S("%d", &b);
        c = (a % b);
        P("\n\nmod of %d and %d is : %d", a, b, c);
        goto next;

    case 6:
        break;
    }
}