#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    bool is_symmetric = true;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric) break;
    }

    printf("%s\n", is_symmetric ? "True" : "False");
    return 0;
}