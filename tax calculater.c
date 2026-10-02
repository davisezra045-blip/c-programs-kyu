#include <stdio.h>

//function prototype
float calculateTax(float gross_salary);

int main(){

    float gross, tax, net_salary;
    printf("Enter gross salary: \t");
    scanf("%f", &gross);
    //function call
    tax = calculateTax(gross);
    net_salary = gross - tax;

    printf("\n");
    printf("EMPLOYEE SALARY \n");
    printf("======================== \n");
    printf("Gross Salary: Ksh %.2f \n",gross);
    printf("Tax Deducted: Ksh %.2f \n", tax);
    printf("Net Salary: Ksh %.2f \n", net_salary);
    printf("======================== \n");

    return 0;
}
//function definition
float calculateTax(float gross_salary){
    float tax;
    if (gross_salary <30000){
        tax = 0.05 * gross_salary;
    }
    else if (gross_salary >=30000 && gross_salary<=59999){
        tax = 0.1 * gross_salary;
    }
    else if(gross_salary>=60000){
        tax = 0.15 * gross_salary;
        }
        return tax;
}
