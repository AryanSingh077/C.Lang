// #Write programs to implement 1D &amp; 2D array concepts on suitable problems such as sorting of elements, searching of element, matrix addition, subtraction, multiplication etc.

// searching the elements:


// in 1d array:

// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     int arr[] = {10,20,30,40,50,60};
//     int a;
//     bool isPresent = false;

//     printf("Enter the number you want to search: \n");
//     scanf("%d", &a);

//     for(int i = 0; i<=5;i++){
//         if(arr[i]==a){
//             printf("Found %d at index %d\n", a,i);
//             isPresent = true;
//             break;
//         }
//     }

//     if(!isPresent){
//         printf("Number not found!!");
//     }
//     return 0;
// }

// in 2d array:

// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     int arr[3][3] = {
//         {10,20,30},
//         {40,50,60},
//         {70,80,90}
//     };
//     int a;
//     bool isPresent = false;

//     printf("Enter the number you want to search: \n");
//     scanf("%d", &a);
//     for(int i = 0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==a){
//                 printf("Found %d at row %d and column %d", arr[i][j],i,j);
//                 isPresent=true;
//                 break;
//             }
//         }
//     }

//     if(!isPresent){
//         printf("Number not found!!");
//     }
//     return 0;
// }

// sorting an array:

// 1d array:

// #include <stdio.h>

// int main(){

//     int arr[] = {10,20,70,60,30,90};
//     int n = 6;

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("Your new sorted array is:");

//     for(int k=0;k<n;k++){
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }

// for 2d array:

// #include <stdio.h>

// int main(){
//     int mat[3][3]={
//         {10,40,60},
//         {80,30,20},
//         {90,70,50}
//     };
//     int row=3,column=3,size;
//     size = row*column;

//     int tempArr[size];

//     int k=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             tempArr[k] = mat[i][j];
//             k++;
//         }
//     }

//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(tempArr[j]>tempArr[j+1]){
//                 int temp = tempArr[j];
//                 tempArr[j] = tempArr[j+1];
//                 tempArr[j+1] = temp;
//             }
//         }
//     }

//     k = 0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             mat[i][j]=tempArr[k];
//             k++;
//         }
//     }

//     printf("The Sorted Matrix is:\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < column; j++) {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// now for operations on matrix: like addition, substraction, multiplication and ...blah blah blah

#include <stdio.h>

int main(){
    int arr1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    int sum[3][3];
    int sub[3][3];
    int mul[3][3];

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j] = 0;
            for(int k = 0;k<3;k++){
                mul[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
        printf("\n");
    }

    printf("The addition of these matrix is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("The Substraction of these matrix is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    
    printf("The Multiplication of these matrix is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}