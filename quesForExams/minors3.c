#include <stdio.h>

long long int factorial(int num){
    long long int fact = 1;
    for(int i =1; i<=num;i++){
        fact = fact*i;
    }
    return fact;
}

long long int per(int n, int r){
    return factorial(n)/factorial(n-r);
}

long long int com(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n,r;
    printf("Enter your numbers n and r (n>=r): ");
    scanf("%d%d", &n,&r);

    if(r>n || n<0||r<0){
        printf("Entered number is invalid");
    } else {
        printf("%dP%d = %lld\n", n,r,per(n,r));
        printf("%dC%d = %lld\n", n,r,com(n,r));
    }
    return 0;
}