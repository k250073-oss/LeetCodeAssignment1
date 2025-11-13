#include <stdio.h>

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int nums[2 * n], result[2 * n];

    printf("enter %d numbers: ", 2 * n);
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        result[j++] = nums[i];
        result[j++] = nums[i + n];
    }

    printf("output: [");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d", result[i]);
        if (i < 2 * n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
