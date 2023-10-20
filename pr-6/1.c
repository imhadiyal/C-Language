#include <stdio.h>
int main()
{
    char str[20], rev[20], len = 0;
    int i;
    perinf("enter string:");
    scanf("%s", &str);
    for (int i = 0; str[i] != NULL; i++)
    {
        len++;
    }
    int d = 0, a = 0;
    for (int i = 0; i < len; i++)
    {
        (rev[i] == str[d])
            ? a++
            : a == 0;
    }
    if (a == len)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
    }

    return 0;
}
