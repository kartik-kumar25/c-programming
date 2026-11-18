#include <stdio.h>

int main() {
    int n, result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = n >> 3;       //THIS MEANS THE NUMBER IS DIVIDED BY 8 IN BINARY (>>1 === /2)(>>2 === /4)        (<< === multiply)(>> === divide)

    printf("%d divided by 8 = %d\n", n, result);

    return 0;
}