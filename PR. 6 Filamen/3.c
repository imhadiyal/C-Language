#include <stdio.h>
main()
{
    char a[50], b[50];
    printf("enter a string1:");
    scanf("%s", &a);
    printf("enter a string1:");
    scanf("%s", &b);
    int len1 = 0, len2 = 0, j = 0;
    for (int i = 0; a[i] != NULL; i++)
    {
        len1++;
    }
    for (int i = 0; b[i] != NULL; i++)
    {
        len2++;
    }
    for (int i = 0; i < len1; i++)
    {
        if (len1 == len2)
        {
            if (a[i] == b[i])
            {
                j++;
            }
        }
        else
        {
            printf("not same");
        }
    }
    (j == len1)
        ? printf("same")
        : printf("not same");
}
