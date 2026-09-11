#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i;

    scanf("%d", &n1);

    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge first array
    for (i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    // Merge second array
    for (i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    // Print merged array
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}