// // multiplication table

// #include <stdio.h>

// int main(){
//     int n,i;
//     n =10;
//     for(i = 1; i<=10;i++){
//         printf("%d x %d = %d\n", i, n, i*n);
//     }
//     return 0;
// }

// // multiplication table in reverse order:

// #include <stdio.h>

// int main(){
//     int n,i;
//     n =10;
//     for(i = 10; i;i--){
//         printf("%d x %d = %d\n", i, n, i*n);
//     }
//     return 0;
// }

// sum of first n natural no. using while:

// #include <stdio.h>

// int main(){
//     int n,sum,i;
//     printf("Enter your no.: ");
//     scanf("%d", &n);

//     i = 1;
//     sum = 0;
//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }
//     printf("The sum of first %d natural no(s) is: %d\n",n, sum);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,sum,n;
//     printf("Enter your no.: ");
//     scanf("%d", &n);

//     for(i=1;i<=n;i++){
//         sum += i;
//     }

//     printf("The sum of first %d natural no(s) is: %d\n", n, sum);
//     return 0;
// }

#include <stdio.h>

int main(){
    int i,sum,n;
    printf("Enter your no.: ");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    do{
        sum+=i;
        i++;
    } while(i<=n);

    printf("The sum of first %d natural no(s) is: %d\n", n, sum);
    return 0;
}