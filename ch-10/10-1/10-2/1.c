#include <stdio.h>

int input()
{
    int n;
    printf("enter a size ");
    scanf("%d", &n);
    return n;
}

void arrayintput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%i] = ", i);
        scanf("%d", &array[i]);
    }
}

int sum(int array[], int size)
{
    printf("\nenter a element\n");
    arrayintput(array, size);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int main()
{
    int size;

    size = input();

    int array[size];

    int Sum = sum(array, size);

    printf("\n\nsum of arrary %i", Sum);
}