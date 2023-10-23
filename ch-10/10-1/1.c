#include <stdio.h>
void cube();
void cube(int a)
{

    printf("cube is %d", a * a * a);
}
int main()
{
    int a;
    printf("enter a cube");
    scanf("%d", &a);

    cube(a);
    return 0;
}
