#include<stdio.h>
int main(){
    int n;

    printf("Enter the no.: ");
    scanf("%d", &n);

    if((n & 3) == 3){
        printf("Both first and second least-significant bits are set.\n");
    } else{
        printf("Both first and second least-significant bits are not set.\n");
    }

    return 0;
}