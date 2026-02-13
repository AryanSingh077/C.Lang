// 4. Function with arguments and return value

#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    printf("Enter your no.: ");
    scanf("%d%d", &x, &y);
    printf("The sum is: %d", add(x,y));
    return 0;
}