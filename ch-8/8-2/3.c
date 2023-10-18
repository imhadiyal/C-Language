#include <stdio.h>

int main() {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("The squares are: ");
    for (int i = 0; i < size; i++) {
        int square = array[i] * array[i];
        printf("%d,\t", square);
       
    }
    printf("\n");

    return 0;
}
