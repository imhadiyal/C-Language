#include <stdio.h>
#include <conio.h>
#define P printf
#define S scanf
void main()
{
    int unit;
    float ammount, bill;

    P("Enter unit : ");
    S("%d", &unit);

    if (unit <= 50)
    {
        ammount = (unit * 50);
    }
    else if ((unit <= 150) && (unit >= 51))
    {
        ammount = 25 + ((unit - 50) * 0.75);
    }
    else if ((unit <= 250) && (unit >= 151))
    {
        ammount = (100) + ((unit - 150) * 1.2);
    }
    else if (unit >= 251)
    {
        ammount = (220) + ((unit - 250) * 1.5);
    }

    bill = ammount + (ammount * 0.2);

    P("Electricity bill = %.2f", bill);
    getch();
}
