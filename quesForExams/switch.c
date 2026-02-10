#include <stdio.h>

int main(){
    char ope;
    double a,b;

    printf("Enter your operator(+,-,*,/): ");
    scanf("%c", &ope);

    printf("Enter two no(s): ");
    scanf("%lf%lf", &a,&b);

    switch(ope){
        case ('+'):
        printf("%.2lf + %.2lf = %.2lf", a,b, a+b);
        break;
        case ('-'):
        printf("%.2lf - %.2lf = %.2lf", a,b, a-b);
        break;
        case ('*'):
        printf("%.2lf x %.2lf = %.2lf", a,b, a*b);
        break;
        case ('/'):
        if (b==0){
            printf("Not Defined output.");
        }
        else{
            printf("%.2lf / %.2lf = %.2lf", a,b, a/b);
        }
        break;
    }
}