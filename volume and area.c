#include <stdio.h>
#define PI 3.14159

int main(){
    float radius, height, volume, surface;

    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surface = 2 * PI * radius * (radius + height);

    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surface);
    return 0;
}
