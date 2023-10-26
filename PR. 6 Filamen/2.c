#include <stdio.h>
main()
{
    char a[50];
    printf("enter a string:");
    scanf("%s", &a);
    int  k = 1;
    for (int i = 0; a[50] != NULL; i++)
    {
        for (int j = 0; a[50] != NULL; j++)
        {
            if (a[i] == a[j])
            {
                k++;
                a[j] = NULL;
            }
        }
        printf("%s=%d", a[i], k);
    }
}
