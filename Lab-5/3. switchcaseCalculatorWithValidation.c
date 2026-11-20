#include<stdio.h>
int main(){
    int a, b;
    float value;
    char operation, choice;

    do{
        printf("Enter two variables: ");
        scanf("%d%d", &a, &b);

        printf("Enter the operation\n(+, -, *, /): ");
        scanf(" %c", &operation);

        switch(operation){
            case '+':
            value = a + b;
            printf("Result: %.2f", value);
            break;

            case '-':
            value = a - b;
            printf("hello");
            printf("Result: %.2f", value);
            break;

            case '*':
            value = a * b;
            printf("Result: %.2f", value);
            break;

            case '/':
            if(b == 0){
                printf("Error, denominator can't be zero");
            } else {
                value = (float)a/b;
                printf("Result: %.2f", value);
            }
            break;

            case '%':
            if(b == 0){
                printf("Error, denominator can't be zero");
            } else {
                value = a % b;
                printf("Result: %.2f", value);
            }
            break;

            default:
                printf("Invalid operator\n");
        }

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &choice);

    }while (choice != 'N' && choice != 'n');

    printf("Calculator stopped!");
}