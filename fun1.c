// 1. Function with no arguments and no return value

#include <stdio.h>

void add(){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("Sum = %d\n", a+b);
}

int main(){
    add();
    return 0;
}
