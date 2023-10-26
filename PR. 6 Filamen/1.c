#include <stdio.h>
int main()
{
    char name1[20], rev[20], len = 0;
    printf("enter a string:");
    scanf("%s", &name1);
    for (int i = 0; name1[20] != '\0'; i++)
    {
        len++;
    }
    int j = 0, a = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[j] = name1[i];
        j++;
    }
    for (int i = 0; i < len; i++)
    {
        (rev[i] == name1[i])
            ? a++
            : a == 0;
    }
    (a == len)
        ? printf("palindrome")
        : printf("not palindrome");
    return 0;
}
