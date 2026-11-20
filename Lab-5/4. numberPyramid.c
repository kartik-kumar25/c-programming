#include <stdio.h>
int main(){
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0){
            break;
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 7 == 0){
                break;
            }

            printf("%d ", j);
        }

        printf("\n");
    }
}