#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;

    printf("Wht is the length and breadth of rectangle?\n");
    scanf("%f%f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle: %.2f\nPerimeter of Rectangle: %.2f", area, breadth);
};