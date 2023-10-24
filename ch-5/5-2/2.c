#include <stdio.h>

int main()
{

    int num1, num2, num3, num4;
    printf("Enter a first number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);
    printf("Enter a third number: ");
    scanf("%d", &num3);
    printf("Enter a fourth number: ");
    scanf("%d", &num4);

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            if (num1 >= num4)
            {
                printf("The maximum value is: %d", num1);
            }
            else
            {
                printf("The maximum value is: %d", num4);
            }
        }
        else
        {
            if (num3 >= num4)
            {
                printf("The maximum value is: %d", num3);
            }
            else
            {
                printf("The maximum value is: %d", num4);
            }
        }
    }
    else
    {
        if (num2 >= num3)
        {
            if (num2 >= num4)
            {
                printf("The maximum value is: %d", num2);
            }
            else
            {
                printf("The maximum value is: %d", num3);
            }
        }
        else
        {
            if (num3 >= num4)
            {
                printf("The maximum value is: %d", num3);
            }
            else
            {
                printf("The maximum value is: %d", num4);
            }
        }
    }

    return 0;
}
