#include <stdio.h>

int main() {
    float a, b;

    printf("Enter the Celsius: ");
    scanf("%f", &a);

  
    b = (a* 9/5) + 32;

    printf("The temperature in Fahrenheit: %.1f\n", b);

    return 0;
}
