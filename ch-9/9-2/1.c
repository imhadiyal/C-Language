#include <stdio.h>
int main()
{
    char pas[20];
    int len = 0, upr = 0, low = 0, dig = 0, sim = 0;
    printf("enter your password:");
    scanf("%s", pas);
    for (int i = 0; pas[i] != NULL; i++)
        len++;
    if (len > 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (pas[i] >= 65 && pas[i] <= 90)

                upr = 1;
            else if (pas[i] >= 97 && pas[i] <= 122)
                low = 1;
            else if (pas[i] >= 48 && pas[i] <= 57)
                dig = 1;
            else
                sim = 1;
        }
    }
    else
    {
        printf("pasword is not storg:");
    }
    if (upr == 1 && low == 1 && dig == 1 && sim == 1)
    {
        printf("pasword is storg:");
    }
    else
    {
        printf("pasword is not storg:");
    }

    return 0;
}
