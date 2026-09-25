/*
name : Davis Ezra
reg no : CT100/G/30694/26
date : 24th sep, 2026
description : Data Promting
*/

#include <stdio.h>

int main(){

float Height ;
double bankbalance ;
char phonenumber [10];

printf("enter the height in centimeters:");
scanf("%f", &Height);

printf("enter the bankbalance: ");
scanf("%lf", &bankbalance);

printf("enter the phonenumber: ");
scanf("%10s", &phonenumber);

printf("the Height is %.f \n", Height);
printf("the bankbalance is %.f \n", bankbalance);
printf("the phonenumber is %s \n", phonenumber);

return 0;
}
