#include<stdio.h>
int main(){
    int num;

    printf("Enter any number:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("The give no. %d is EVEN", num);
    } else{
        printf("The given no. %d is ODD", num);
    }

    return 0;
}