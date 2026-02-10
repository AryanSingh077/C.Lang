// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i =0;i<3;i++){

//         for(j=0;j<2*i+1;j++){
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,j;
//     for (i=1;i<5;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i = 1; i <= 5; i++) {

//         for(j = 1; j <= 5 - i; j++) {
//         printf(" ");
//         }

//         for(j = 1; j <= (2 * i - 1); j++) {
//         printf("*");
//         }

//     printf("\n");
// }
//     return 0;
// }

// #include<stdio.h>

// #include <stdio.h>

// int main(){
//     int i,j,n;
//     n = 5;

//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//     printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,j,n;
//     n =5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    /*
    int i, j, n;
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    /*
    int arr[6]={4,4,7,4,3,9};
    for (int i = 0; i <= 5; i++)
    {
    if (i%2==0)
    {
        printf("%d,", arr[i]);
    }
    }
    */

    int arr[3][3];
    printf("elementals of matrix:\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the diagonal matrix:");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}