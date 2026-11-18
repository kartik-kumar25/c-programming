#include<stdio.h>
int main(){
    int n, result;

    printf("Enter the no.: ");
    scanf("%d", &n);

    result = n & 15;

    printf("The lowest 4 bits of an integer: %d", result);

    return 0;
}