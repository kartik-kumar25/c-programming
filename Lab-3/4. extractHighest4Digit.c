#include <stdio.h>

int main() {
    int n, result;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);

    result = (n >> 4) & 15;

    printf("Highest 4 bits = %d\n", result);

    return 0;
}
