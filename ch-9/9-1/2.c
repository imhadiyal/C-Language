#include <stdio.h>

int main()
{
    char name[50];
    printf("enter your name:");
    scanf("%s", &name);
    for (int i = 0; i < 10; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    printf("Name: %s", name);

    return 0;
}