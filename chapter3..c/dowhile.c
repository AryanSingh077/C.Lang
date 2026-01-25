// #for n natural no.

#include <stdio.h>

int main(){

    int i = 1, n;
    printf("Enter the natural no.: ");
    scanf("%d", &n);

    do
    {
        printf("The value of i is: %d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}