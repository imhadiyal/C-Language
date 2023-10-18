#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int add = a + b;
    printf("Addition of %d and %d Ans %d.\n", a, b, add);

    int sub = b - a;
    printf("Subtraction of %d and %d Ans %d.\n", b, a, sub);

    int mul = a * b;
    printf("Multiplication of %d and %d Ans %d.\n", a, b, mul);

    int div = b / a;
    printf("Division of %d and %d Ans %d.\n", b, a, div);

    int mod = b % a;
    printf("Modulus of %d and %d Ans %d.\n", b, a, mod);

    return 0;
}
