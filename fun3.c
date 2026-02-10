// 3. Function with no arguments but return value
#include <stdio.h>

int sum(){
    int a,b;
    printf("Enter your no: ");
    scanf("%d%d", &a,&b);
    return a+b;
}

int main(){
    int A = sum();
    printf("The sum is: %d", A);
}