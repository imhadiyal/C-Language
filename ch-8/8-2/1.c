#include <stdio.h>

int main() {
    int asize, bsize;

    printf("Enter array A's size: ");
    scanf("%d", &asize);

    int a[asize];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < asize; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter array B's size: ");
    scanf("%d", &bsize);

    int b[bsize];

    printf("Enter array B's elements:\n");
    for (int i = 0; i < bsize; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    int csize = asize + bsize;
    int c[csize];

   
    for (int i = 0; i < asize; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < bsize; i++) {
        c[asize + i] = b[i];
    }

    printf("Array C is: ");
    for (int i = 0; i < csize; i++) {
        printf("%d,\t", c[i]);
        
    }
    printf("\n");

    return 0;
}
