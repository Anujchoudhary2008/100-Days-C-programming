#include <stdio.h>

int main() {
    int n, arr[100];
    int largest, second;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[1];

    if (second > largest) {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}