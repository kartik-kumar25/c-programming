#include <stdio.h>
int main(){
    int a, b;
    float result1, result2;

    printf("Enter Two Integers:");
    scanf("%d%d", &a,&b);

    result1 = a/2.0;
    result2 = (float)a/b;

    printf("Implicit Type Conversion=%.2f\n",result1);
    printf("Explicit Type Conversion=%.2f\n",result2);

    return 0;
}