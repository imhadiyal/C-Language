#include <stdio.h>

int main() {
    int row;

    printf("Enter the  row: ");
    scanf("%d", &row);
    

    int a[row];

    printf("Enter array:\n");

    for (int i = 0; i < row; i++) {
        
            printf("enter array a= ");
            scanf("%d", &a[i]);
        
    }
    for (int i = 0; i < row; i++) {
        
           if(a[i]<0){
              printf("nagativ :%d",a[i]);
           }
           

    }

    return 0;
}