#include <stdio.h>
#include <conio.h>
main()
{
    float l, b, AOT;
    clrscr();
    printf("enter length:");
    scanf("%f", &l);
    printf("enter base:");
    scanf("%f", &b);

    AOT = 0.5 * l * b;
    printf("area of tringle:%.2f", AOT);
    getch();
}