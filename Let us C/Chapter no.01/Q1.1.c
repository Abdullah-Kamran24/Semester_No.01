#include <stdio.h>

int main(){
    int Dearness_Allowance;
    int House_Allowance;
    int Basic_Salary;
    int Gross_Salary;

    printf("Enter the Basic Salary of Ramesh: ");
    scanf("%d",&Basic_Salary);

    House_Allowance = 0.2 * Basic_Salary;
    Dearness_Allowance = 0.4 * Basic_Salary;
    Gross_Salary = House_Allowance + Dearness_Allowance + Basic_Salary;
    printf("\tBasic Salary: %d\n",Basic_Salary);
    printf("\tDearness Allowance: %d\n",Dearness_Allowance);
    printf("\tRent House Allowance: %d\n",House_Allowance);
    printf("\tGross Salary:%d\n",Gross_Salary);

return 0;
}
