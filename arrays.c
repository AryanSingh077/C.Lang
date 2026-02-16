// #include <stdio.h>
// int main(){
//     int i;
//     int num[] = {12,4651,412,97,52,4};
//     int len = sizeof(num)/sizeof(num[0]);
//     for (i=0;i<=len;i++){
//         printf("numbers[%d] = %d|", i, num[i]);
//     };
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int matrix_1[2][3] = {{1,4,2},
//                           {4,8,9}};
//     int matrix_2[2][3] =  {{45,2,6}, 
//                            {12,32,7}};
//     int sum[2][3],i,j;

//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             sum[i][j]=matrix_1[i][j] + matrix_2[i][j];
//             printf("%d ", sum[i][j]);
//         }
//     printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int arr[] = {12, 12,5,12,51,32,51};
//     int len = (sizeof(arr))/(sizeof(arr[0]));
//     for (int i=0; i<len; i++ ){
//         printf("%d ", arr[i]);
//     };
//     return 0;
// }


#include <stdio.h>

int main(){
    int a1[2][2] = {{2,3},
                    {4,5}};
                
    int a2[2][2] = {{6,2},
                    {4,1}};
    int sum[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){

            sum[i][j] = a1[i][j] + a2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
                
                
    return 0;
}