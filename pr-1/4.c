#include <stdio.h>

int main()
{
    int A, B;

    printf("Enter the first number A: ");
    scanf("%d", &A);

    printf("Enter the second number B: ");
    scanf("%d", &B);

      A = A * B;
    B = A / B;
    A = A / B;

    printf("swapping:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}
