#include <stdio.h>
int main()
{
    int a, b;
    printf("ennter a first number:");
    scanf("%d", &a);

    if (a > 0 && a <= 9)
    {
        printf("number is positive");
    }
    else if (a < 0)
    {
        printf("number is negetiv");
    }
    else
    {
        printf("number is neutral");
    }

    return 0;
}
