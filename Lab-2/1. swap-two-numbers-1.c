#include<stdio.h>
int main(){
    int a, b, temp;

    printf("Enter any two number:");
    scanf("%d%d", &a, &b);

    printf("Before Swapping: a=%d ; b=%d\n", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a=%d ; b=%d", a,b);

    return 0;
}