#include<stdio.h>
int main(){
    float grossSalary, basic, HRA, DA;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Enter House Rent Allowance(HRA): ");
    scanf("%f", &HRA);
    printf("Enter the Dearness Allowance(DA): ");
    scanf("%f", &DA);

    grossSalary = basic + HRA + DA;

    printf("Gross Salary: %.2f", grossSalary);
}