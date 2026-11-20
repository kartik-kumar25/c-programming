#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % 2 == 0 && i > n / 2)
            break;

        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    if (n % 2 != 0)
    {
        for (i = n - 1; i >= 1; i--)
        {
            for (j = 1; j <= n - i; j++)
                printf(" ");

            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");

            printf("\n");
        }
    }

    return 0;
}