#include <stdio.h>
int main(){
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1){
        printf("Unity");
    } else if (n < 1){
        printf("Invalid input");
    } else {
        for (i = 2; i < n; i++){
            if (n % i == 0){
                break;
            }
        }

        if (i < n){
            printf("Smallest divisor greater than 1 = %d", i);
        } else {
            if (n <= 10){
                printf("Small Prime");
            } else {
                printf("Large Prime");
            }
        }
    }
}