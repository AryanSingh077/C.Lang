#include<stdio.h>

int main(){
    float P,r,t,SI;
    printf("Enter your Principle Amount, Rate of interest, and time duration: \n");
    scanf("%f%f%f", &P, &r, &t);

    SI = (P*r*t)/100.0;

    printf("Ypur Simple Interest is: %f", SI);
    return 0;
}
