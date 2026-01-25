// shorted if else

#include <stdio.h>

int main(){
    int a,b;
    printf("select your no.s a and b: ");
    scanf("%d%d", &a, &b);

    // condition? true:false
    (a>b)?printf("a is greater than b"):printf("b is greater than a");
    return 0;
}