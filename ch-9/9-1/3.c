#include <stdio.h>

int main()
{
    char name[50];
    printf("enter your name:");
    scanf("%s", &name);
    for (int i = 0; i < 7; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        else
        {
            name[i] += 32;
        }
    }
    printf("Name: %s", name);

    return 0;
}