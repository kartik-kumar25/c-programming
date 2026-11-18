#include<stdio.h>
int main(){
    float length, breadth, area;

    printf("Enter the values:\n");
    printf("Length: ");
    scanf("%f", &length);
    printf("Breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("Area of rectangle=%.2f", area);

    return 0;
}