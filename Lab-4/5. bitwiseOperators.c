#include <stdio.h>
int main(){

    int a, b;

    printf("Enter two value: ");
    scanf("%d%d", &a,&b);

    printf("Bitwise AND = %d\n", a & b);
    printf("Bitwise OR = %d\n", a | b);
    printf("Bitwise XOR = %d\n", a ^ b);
    printf("Bitwise NOT of a = %d\n", ~a);
}