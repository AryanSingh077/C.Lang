#include <stdio.h>

int main(){
    int a,b;
    printf("Enter your no.: ");
    scanf("%d%d", &a, &b);
    if (a>b){
        printf("a is greater than b");
    }
    else if(a==b){
        printf("a is equal to b");
    }
    else{
        printf("a is less than b");
    }
    return 0;
}