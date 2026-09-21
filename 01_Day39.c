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

    int min_dim = (rows < cols) ? rows : cols;
    bool all_distinct = true;

    // Check pairs on the main diagonal
    for (int i = 0; i < min_dim; i++) {
        for (int j = i + 1; j < min_dim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                all_distinct = false;
                break;
            }
        }
        if (!all_distinct) break;
    }

    printf("%s\n", all_distinct ? "True" : "False");
    return 0;
}