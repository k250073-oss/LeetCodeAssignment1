#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int nums[n], runningsum[n];

    printf("enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    runningsum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        runningsum[i] = runningsum[i - 1] + nums[i];
    }

    printf("running sum: [");
    for (int i = 0; i < n; i++) {
        printf("%d", runningsum[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
