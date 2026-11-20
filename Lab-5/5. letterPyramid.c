#include <stdio.h>
int main(){
    int i, j, n;
    char ch;

    printf("Enter the value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0){
            ch = 'a' + i - 1;
        } else {
            ch = 'A' + i - 1;
        }

        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
}