//variables and Data Types

#include <stdio.h>

int main(){
//declare and initialize variables
char grade ; //%c
char name[12] ; //%s
int age ; //%d
float marks ; //%f
double pi ; //%lf

printf("Enter your grade: \t");
scanf("%c", &grade);

printf("Enter your name: \t");
scanf("%s", &name);

printf("Enter your age: \t");
scanf("%d", &age);

printf("Enter your marks: \t");
scanf("%f", &marks);

printf("Enter the value of pi: \t");
scanf("%lf", &pi);

printf("I scored an %c in K.C.S.E \n", grade);
printf("My name is %s \n", name);
printf("I am %d years old \n ", age);
printf("I scored %.2f marks in kcse \n", marks);
printf("The value of pi is %.3lf \n", pi);

return 0;
}
