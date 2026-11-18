#include<stdio.h>
int main(){

    int num1, num2, num3;
    int largest;

    printf("Enter three no.:");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2){
        if(num1 > num3){
            largest = num1;
        } else{
            largest = num3;
        }
    } else if(num2 > num3){
        if(num2 > num1){
            largest = num2;
        } else{
            largest = num1;
        }
    } else{
        largest = num3;
    }

    printf("Largest number=%d", largest);
    return 0;
}