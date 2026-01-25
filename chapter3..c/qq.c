// calculating grade using if else:

#include <stdio.h>

int main(){
    float a,b,c,d,e, ave, per;
    printf("Enter your marks in Maths: \n");
    scanf("%f", &a);
    printf("Enter your marks in Chemistry: \n");
    scanf("%f", &b);
    printf("Enter your marks in Physics: \n");
    scanf("%f", &c);
    printf("Enter your marks in Human-Values: \n");
    scanf("%f", &d);
    printf("Enter your marks in English: \n");
    scanf("%f", &e);

    ave = (a+b+c+d+e)/500;
    per = ave*100;
    printf("Your Percentage is %f\%. \n", per);

    if(per<=100 && per>85){
        printf("Your grade is A.");
    }
    else if(per>70){
        printf("Your grade is B.");
    }
    else if(per>55){
        printf("Your grade is C.");
    }
    else if(per>40){
        printf("Your grade is D.");
    }
    else if(per>25){
        printf("Your grade is E.");
    }
    else{
        printf("You are failed.");
    }
    
    return 0;
}