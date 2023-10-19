#include <stdio.h>

int main()
{
    float baseSalary, hra, da, ta, gross;

    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    hra = (baseSalary / 10) * hra;
    da = (baseSalary / 5) * da;
    ta = (baseSalary / 8) * ta;

    gross = hra + da + ta;

    printf("The gross salary is Rs. %.2f\n", gross);

    return 0;
}
