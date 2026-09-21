#include <stdio.h>

int main() {
    int n, arr[100], element;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    
    arr[i + 1] = element;
    n++;


    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}