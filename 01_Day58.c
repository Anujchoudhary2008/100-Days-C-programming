#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {

        int product = 1;

        for (int j = 0; j < n; j++) {

            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(",");
        }
    }

    printf("]");

    return 0;
}