#include <stdio.h>

int main() {
    // float r, Area;
    // printf("choose your radius: \n");
    // scanf("%f", &r);
    // Area = 3.14*r*r;
    // printf("Area of Circle with radius %f is: %f",r, Area);

    float h, r, vol;
    printf("Choose your radius: ");
    scanf("%f", &r);

    printf("Choose your height: ");
    scanf("%f", &h);

    vol = 3.14*r*r*h;

    printf("The volume of cylinder having radius %f and height %f is: %f", r, h, vol);
}