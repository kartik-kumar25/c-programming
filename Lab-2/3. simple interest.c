#include<stdio.h>
int main(){
    int P;
    float  R, T, simpleInterest;

    printf("Enter the follwing:\n");
    printf("Principal: \n");
    scanf("%d", &P);
    printf("Rate: \n");
    scanf("%f", &R);
    printf("Time(in years): \n");
    scanf("%f", &T);

    simpleInterest=(float)(P*T*R)/100;
    printf("Simple Interest:%.2f", simpleInterest);

    return 0;
}