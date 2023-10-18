#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("enter array size");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {

        sum += a[i];
    }

    float avg = sum / size;
    printf("avereg of %f", avg);

    return 0;
}