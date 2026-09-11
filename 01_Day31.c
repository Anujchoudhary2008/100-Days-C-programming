#include <stdio.h>

int main() {
    int n, i, key, index = -1;
    int arr[100];

    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}