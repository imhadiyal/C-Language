#include <stdio.h>

main()
{

    char email[20], pass[20];
    int size = 0, i, a = 0, d = 0, small = 0, sym = 0;

    printf("enter your email : ");
    scanf("%s", &email);
    printf("enter your password : ");
    scanf("%s", &pass);

    for (i = 0; email[i] != NULL; i++)
    {
        if (email[i] == '@')
            a++;
        if (email[i] == '.')
            d++;
    }

    if ((a == 1) && (d == 1))
    {

        a = 0;
        d = 0;

        for (i = 0; pass[i] != NULL; i++)
            size++;

        if (size >= 8)
        {

            for (i = 0; i < size; i++)
            {

                if (pass[i] >= 'A' || pass[i] <= 'Z')
                    a = 1;

                else if (pass[i] >= 'A' || pass[i] <= 'Z')
                    small = 1;

                else if (pass[i] >= '0' || pass[i] <= 'a')
                    d = 1;

                else
                    sym = 1;
            }

            (a == 1 && small == 1 && d == 1)
                ? printf("Login successfull !!")
                : printf("Your password is not Strong !!");
        }
        else
            printf("\n\nYour password is not strong !!");
    }
    else
        printf("Your Email is not valid !!");
}