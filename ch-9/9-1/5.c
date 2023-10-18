#include <stdio.h>

int main()
{
    char name[50];
    printf("enter your name:");
    scanf("%[^\n]", &name);

    for (int i = 0; i < 50; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (name[i] == 32)
        {
            name[i + 1] -= 32;
        }
    }
    printf("Name: %s", name);

    return 0;
}