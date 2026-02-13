// 1. Function with no arguments and no return value

#include <stdio.h>

void sum(){
    int a,b;
    printf("Enter your no.: ");
    scanf("%d%d", &a, &b);
    printf("Sum is = %d", a+b);
}
int main(){
    sum();
    return 0;
}