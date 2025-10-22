#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int n, i, j;

    printf("Enter order of matrices (N): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    // Addition
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of two matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
