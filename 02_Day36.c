#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}