#include <stdio.h>

int main() {
    int n, result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = n << 2;       //THIS MEANS THE NUMBER IS MULTIPLY BY 4 IN BINARY (<<1 === *2)(<<2 === *4)        (<< === multiply)(>> === divide)

    printf("%d multiplied by 4 = %d\n", n, result);

    return 0;
}