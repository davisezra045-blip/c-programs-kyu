#include <stdio.h>

//function prototype
float calculateBill(float units);

int main(){

    float units, result;
    printf("Enter number of units consumed: \t");
    scanf("%f", &units);
    //function call
    result = calculateBill(units);

    printf("\n");
    printf("ELECTRICITY BILL \n");
    printf("======================== \n");
    printf("Units Consumed: %.2f \n",units);
    printf("Total Bill: Ksh %.2f \n", result);
    printf("======================== \n");

    return 0;
}
//function definition
float calculateBill(float units){
    float bill;
    if (units <=100){
        bill = units * 10;
    }
    else if (units <=200){
        bill = (100 * 10) + (units - 100) * 15;
    }
    else if(units >200){
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
        }
        return bill;
}
