#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int mat[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int total_diagonals = rows + cols - 1;

    for (int k = 0; k < total_diagonals; k++) {
        if (k % 2 == 0) {
            // Even diagonal: Go UP and RIGHT
            int r = (k < rows) ? k : rows - 1;
            int c = k - r;
            while (r >= 0 && c < cols) {
                printf("%d ", mat[r][c]);
                r--;
                c++;
            }
        } else {
            // Odd diagonal: Go DOWN and LEFT
            int c = (k < cols) ? k : cols - 1;
            int r = k - c;
            while (c >= 0 && r < rows) {
                printf("%d ", mat[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");

    return 0;
}