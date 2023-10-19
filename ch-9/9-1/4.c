#include <stdio.h>

int main()
{
    char name[50];
    printf("enter your name:");
    scanf("%s", &name);
    if (name[0] >= 97 && name[0] <= 122)
    {
        name[0] -= 32;
    }

    for (int i = 1; i < 50; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    printf("Name: %s", name);

    return 0;
}