#include <stdio.h>
int main(){
    int a = 10, b = 5, c = 2;

    printf("1. a + b * c = %d\n", a + b * c);
    printf("2. (a + b) * c = %d\n", (a + b) * c);
    printf("3. a / b * c = %d\n", a / b * c);
    printf("4. a + b - c = %d\n", a + b - c);
    printf("5. a > b && b > c = %d\n", a > b && b > c);
}