#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
