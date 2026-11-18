#include<stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("Write temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in fahrenheit is: %.2f", fahrenheit);

    return 0;
}