#include <stdio.h>
int main(){
    int n, i, digit;
    unsigned long long fact = 1, temp;
    int even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20){
        printf("Enter a number between 0 and 20");
        return 0;
    }

    for (i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("Factorial = %llu\n", fact);

    temp = fact;

    do{
        digit = temp % 10;

        if (digit % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        temp = temp / 10;

    } while (temp > 0);

    printf("Even digits = %d\n", even);
    printf("Odd digits = %d\n", odd);

    if (odd != 0){
        printf("Ratio = %.2f", (float)even / odd);
    }else
    {
        printf("Ratio = Undefined");
    }

    return 0;
}