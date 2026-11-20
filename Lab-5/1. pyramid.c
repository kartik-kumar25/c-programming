#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j <= i) {
                printf("%d", i - j + 1);
            }
            else {
                printf("%d", j - i + 1);
            }
        }

        printf("\n");
    }
    return 0;
}