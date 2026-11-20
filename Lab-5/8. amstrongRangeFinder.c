#include <stdio.h>

int main()
{
    int start, end, i, j, n, d, sum, count, p;
    
    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    for (i = start; i <= end; i++)
    {
        if (i < 0)
            continue;

        n = i;
        count = 0;
        do {
            count++;
            n /= 10;
        } while (n != 0);

        n = i;
        sum = 0;

        do {
            d = n % 10;
            p = 1;

            for (j = 1; j <= count; j++)
                p *= d;

            sum += p;
            n /= 10;
        } while (n != 0);

        if (sum == i)
            printf("%d ", i);
        else
            continue;
    }

    return 0;
}