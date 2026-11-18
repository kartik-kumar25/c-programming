#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    float d, root1, root2;

    printf("Write the values of a, b, c : ");
    scanf("%d%d%d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d > 0){
        root1 = (-b + sqrt(d))/2 * a;
        root2 = (-b - sqrt(d))/2 * a;

        printf("Root1=%.2f\nRoot2=%.2f", root1, root2);
    } else if(d == 0){
        root1 = (-b)/2 * a;

        printf("Both roots are equal = %.2f", root1);
    } else{
        printf("Root cannot contain negative integer, i.e. Roots are imaginary");
    }
}