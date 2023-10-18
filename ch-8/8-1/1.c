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

    printf("Length of an Array: %d\n", size);

    return 0;
}
