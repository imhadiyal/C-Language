#include <stdio.h>

int main()
{
    char fname[] = "darshan@gmail.com";
    char fpas[] = "123";

    char name[50], pas[50];
    printf("enter your name:");
    scanf("%s", &name);
    printf("enter your pas:");
    scanf("%s", &pas);

    int name1 = 0, pas1 = 0;
    for (int i = 0; fname[i] != '\0'; i++)
    {
        if (fname[i] = name[i])
        {
            name1 = 1;
        }
    }
    for (int i = 0; fpas[i] != '\0'; i++)
    {
        if (fpas[i] = pas[i])
        {
            pas1 = 1;
        }
    }
    if (name1 == 0 && pas1 == 0)
    {
        printf("password mach");
    }
    else
    {
        printf("password not mach");
    }

    return 0;
}