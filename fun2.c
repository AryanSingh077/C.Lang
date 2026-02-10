// function with argument and no return;

#include <stdio.h>

void sum(int a, int b){
    printf("The sum is: %d", a+b);
}

int main(){
    int x,y;
    printf("Enter your no.: ");
    scanf("%d%d", &x,&y);
    sum(x,y);
    return 0;
}