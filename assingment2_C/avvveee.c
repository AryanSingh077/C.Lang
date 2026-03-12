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

// #include <stdio.h>

// int main(){

//     int i,j,k, rows;
//     rows = 5;

//     for(i=0;i<=rows;i++){
//         for(j=0;j<=rows-i;j++){
//             printf(" ");
//         };
//         for(k=0;k<i;k++){
//             printf("%c ", 'A'+k);
//         };
//         printf("\n");
//     }
//     return 0;
// }

// GCD:
// greatest no. which divides two integers...
// like 36 & 8 has GCD: 4;
// now what about big no.s for them we have Euclidean Algorithm:
// which states that, the GCD of two no.s will give 0 in remainder, when the remainder is divider by the the smaller no.
// ex: a = 100, b = 45
// when a%b = 10; then -> b%10 = 5 then -> 10%5 = 0 means-> 5 is the GCD:

// now applying this logic in C:
// #include <stdio.h>

// #include <stdio.h>
// int main(){
//     int a,b, rem;
//     printf("Enter your no.s a & b: \n");
//     scanf("%d%d", &a, &b);
//     while(b != 0){
//         rem = a%b;
//         a = b;
//         b = rem;
//     }
//     printf("The GCD of a and b is: %d", a);
//     return 0;
// }

// #include <stdio.h>

// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }
//     else{
//         return gcd(b,a%b);
//     };
// };

// int main() {
//     int a, b, result;
//     printf("Enter two numbers a and b\n");
//     scanf("%d%d", &a, &b);
//     result = gcd(a, b);
//     printf("The GCD is: %d", result);
//     return 0;
// }

// now we will move to check matrix:

// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     bool isDiagonal=true, isUpper=true, isLower=true;
//     int mat[3][3];

//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             printf("Fill your matrix where i = %d and j = %d\n", i,j);
//             scanf("%d", &mat[i][j]);
//         }
//     }

//     for(int i = 0; i < 3 ; i++){
//         for(int j = 0; j < 3 ; j++){
//             if(i>j && mat[i][j]!=0){
//                 isUpper = false;
//             }

//             if(i<j && mat[i][j]!=0){
//                 isLower = false;
//             }
//         }
//     }

//     if(isUpper && isLower){
//         printf("The matrix is Diagonal matrix\n");
//     }
//     else if(isUpper){
//         printf("The matrix is Upper Diagonal Matrix\n");
//     }
//     else if(isLower){
//         printf("The matrix is Lower Diagonal matrix\n");
//     } 
//     else{
//         printf("The matrix is neither Triangular nor diagonal\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// meow meow meow...