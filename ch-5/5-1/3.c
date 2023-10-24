#include <stdio.h>
int main()
{
    char a;
    printf("ennter a first number:");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("vowel");
    }
    else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("console");
    }

    return 0;
}
