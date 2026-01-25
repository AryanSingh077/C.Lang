// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     int i, n;
//     bool isPrime;
//     isPrime = true;
//     printf("Choose n: ");
//     scanf("%d", &n);
//     if(n==1 || n == 0){
//         isPrime=false;
//     }
//     else{
//         for(i=2;i<n; i++){
//             if(n%i==0){
//                 isPrime=false;
//                 break;
//             }
//         }
//     }

//     if (isPrime){
//         printf("No is prime!");
//     }
//     else{
//         printf("No is not Prime!");
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdbool.h>

int main(){
    int i,n;
    bool isPrime;
    isPrime=true;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n==0 || n==1){
        isPrime=false;
    }
    else{
        for(i=2;i<n; i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        printf("Entered num is prime!");
    }
    else{
        printf("Num is not prime!");
    }
    return 0;
}