#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n & 3) == 0) {        //for a no. divisible by 4 last 2 digit of bit should be 0
        printf("%d is divisible by 4.\n", n);
    } else {
        printf("%d is not divisible by 4.\n", n);
    }

    return 0;
}