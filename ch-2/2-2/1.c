#include <stdio.h>
#include <conio.h>
main()
{
    float pi = 3.14, r, AOC;
    clrscr();
    printf("enter R:");
    scanf("%f", &r);
    AOC = pi * r * r;
    printf("area of circle:%.2f", AOC);
    getch();
}