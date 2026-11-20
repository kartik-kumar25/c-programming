#include<stdio.h>
#include<math.h>
int main(){
    float CI, P, r, A, t, exponent, base;
    int n;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    printf("Annual interest rate(in percentage): ");
    scanf("%f", &r);
    printf("Enter time (in yrs): ");
    scanf("%f", &t);
    printf("Enter compounding interest: ");
    scanf("%d", &n);
    base = 1 + r/(100*n);
    exponent = n * t;
    A = P * pow(base, exponent);
    CI = A - P;

    printf("Compound interest: %.2f", CI);
}