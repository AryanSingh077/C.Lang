#include <stdio.h>

int main(){
    int m, n, i, j, isPrime;
    printf("Choose your no(s) m and n: ");
    scanf("%d%d", &m,&n);
    for (i=m; i<=n;i++){
        if (i<2){
            continue;
        }
        isPrime = 1;

        for (j=2; j<=i/2;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}