#include <stdio.h>

int main(){
    float C, F;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &C);

    F = (9.0/5.0)*C + 32;

    printf("The temperature is %f degree Fahrenheit.", F);
}