#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n & 7) == 7) {
        printf("LSB, 2nd bit and 3rd bit are all set.\n");
    } else {
        printf("All three bits are not set.\n");
    }

    return 0;
}