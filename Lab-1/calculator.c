#include<stdio.h>
int main(){

    float a,b,result;
    char operator;

    printf("Enter two number:");
    scanf("%f %f", &a, &b);

    printf("Enter any operator: (+, -, *, /):");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
        result = a+b;
        printf("Result = %.2f", result);
        break;

        case '-':
        result = a-b;
        printf("Result = %.2f", result);
        break;
        
        case '*':
        result = a*b;
        printf("Result = %.2f", result);
        break;

        case '/':
        if(b != 0){
            result = a/b;
            printf("Result = %.2f", result);
        } else{
            printf("Division by zero is indefined");
        }
        break;

        default:
        printf("invalid operator.");

    }

    return 0;
}