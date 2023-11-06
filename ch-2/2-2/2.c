#include <stdio.h>
#include <conio.h>
main()
{
    float l, w, AOR;
    clrscr();
    printf("enter length:");
    scanf("%f", &l);
    printf("enter width:");
    scanf("%f", &w);

    AOR = l * w;
    printf("area of rectangle:%.2f", AOR);
    getch();
}