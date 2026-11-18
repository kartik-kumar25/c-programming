#include<stdio.h>
int main(){
    int num, sum;

    printf("Enter 3 digit number: ");
    scanf("%d", &num);

    sum = (num / 100) + ((num / 10) % 10) + (num % 10);

    printf("Digit Sum= %d", sum);

    return 0;
}