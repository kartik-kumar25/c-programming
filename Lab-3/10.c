#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    if (n & (1 << pos)) {
        printf("Bit is ON\n");
    } else {
        printf("Bit is OFF\n");
    }

    return 0;
}