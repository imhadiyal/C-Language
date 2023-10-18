#include <stdio.h>

int main()
{
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    double result = (x + y) * (x + y) * (x + y);

    printf("(x + y)^3 = %.2lf\n", result);

    return 0;
}
