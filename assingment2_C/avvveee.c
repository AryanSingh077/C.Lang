// // doing p and c in this fucking file...

// #include <stdio.h>

// long long int factorial(int num){
//     if(num <= 0){
//         return 1;
//     };
//     long long int fact = 1;
//     for(int i = 1; i <= num; i++){
//         fact = fact*i;
//     };
//     return fact;
// };

// long long int per(int n, int r){
//     return factorial(n)/factorial(n-r);
// };

// long long int com(int n, int r){
//     return factorial(n)/(factorial(r)*factorial(n-r));
// };

// int main() {
//     int n, r;
//     printf("Enter the numbers n and r (n>=r): \n");
//     scanf("%d%d", &n, &r);

//     if(r>n || n<0 || r<0){
//         printf("Invalid input.\n");
//     }
//     else{
//         printf("Permutation:\n");
//         printf("%dP%d = %lld\n", n,r,per(n,r));

//         printf("Combination:\n");
//         printf("%dC%d = %lld\n", n,r,com(n,r));
//     };
//     return 0;
// }

#include <stdio.h>

int main(){

    int i,j,k, rows;
    rows = 5;

    for(i=0;i<=rows;i++){
        for(j=0;j<=rows-i;j++){
            printf(" ");
        };
        for(k=0;k<i;k++){
            printf("%c ", 'A'+k);
        };
        printf("\n");
    }
    return 0;
}