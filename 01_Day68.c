#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int sum = 0;

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("%d", missing);

    return 0;
}