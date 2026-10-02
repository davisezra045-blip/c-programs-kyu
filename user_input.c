#include <stdio.h>

int main(){
    float height;
    double balance;
    char phone[20];

    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter bank balance: ");
    scanf("%lf", &balance);
    printf("Enter phone number: ");
    scanf("%s", phone);

    printf("\nYour Details:\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: %.2f\n", balance);
    printf("Phone Number: %s\n", phone);
    return 0;
}
