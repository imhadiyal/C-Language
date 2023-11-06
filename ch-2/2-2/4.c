#include <stdio.h>
#include <conio.h>
main()
{
    float p, r, t, SI;
    clrscr();
    printf("enter p:");
    scanf("%f", &p);
    printf("enter r:");
    scanf("%f", &r);
    printf("enter t:");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    printf("simple interest:%.2f", SI);
    getch();
}