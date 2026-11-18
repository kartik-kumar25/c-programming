#include<stdio.h>
int main(){
    float r, area, circumference;

    printf("Enter the value of radius: ");
    scanf("%f", &r);

    area = (22.0/7) * r * r;
    circumference = 2 * 22.0/7 * r;

    printf("Area of Circle=%.2f\nCircumference of circle=%.2f", area, circumference);

}
