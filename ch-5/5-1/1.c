#include <stdio.h>
int main()
{
    int a, b;
    printf("ennter a first number:");
    scanf("%d", &a);
    printf("ennter a second number:");
    scanf("%d", &b);
    if (a < b)
    {
        printf("minimum value:%d", a);
    }
    else if (a > b)
    {
        printf("minimum value:%d", b);
    }

    else
    {
        printf("both are same");
    }

    return 0;
}
