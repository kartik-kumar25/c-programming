#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;       //THIS IS NOT POWER SIGN THIS MAKES COMPARE OF 2 NO. OF EACH DIGIT IF SAME THEN 0 OR ELSE 0;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}