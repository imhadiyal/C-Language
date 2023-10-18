#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int array[rows][columns];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
    }

   
    float average = sum / (rows * columns);

    printf("Average of an Array: %.2lf\n", average);

    return 0;
}
