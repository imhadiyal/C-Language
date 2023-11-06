#include <stdio.h>
#include <conio.h>
main()
{
    float pi = 3.14, r, POC;
    clrscr();
    printf("enter R:");
    scanf("%f", &r);
    POC = 2 * (pi * r);
    printf("area of circle:%.2f", POC);
    getch();
}