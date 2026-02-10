#include <stdio.h>

int main(){
    int i,j,k,rows;
    rows = 5;

    for(i=1;i <= rows;i++){
        for(j=1;j<= rows - i; j++){
            printf(" ");
        }

        for(k=0;k<i;k++){
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}