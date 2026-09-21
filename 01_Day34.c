#include <stdio.h>

int main() {
    int n, arr[100];
    int pos, element;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = element;
    n++;


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}