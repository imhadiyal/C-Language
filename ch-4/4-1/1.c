#include <stdio.h>

int main()
{
    int number;

    printf("Enter any Number: ");
    scanf("%d", &number);

    int incremented = number + 1;
    printf("increment : %d\n", incremented);

    int decremented = number - 1;
    printf("decrement : %d\n", decremented);

    return 0;
}
