// // 1st function:

// #include <stdio.h>

// int main(){

//     int a;
//     int *p = &a;
//     int **pp = &p;
    
//     printf("Enter your no: \n");
//     scanf("%d", &a);


//     printf("Value of a: %d\n", a);
//     printf("Address of a: %p\n", &a);

//     printf("Value of p using *p: %d\n", *p);
//     printf("Address of p using *p: %p\n", &p);

//     printf("Value of *p using **pp: %d\n", **pp);
//     printf("Address of *p using **pp: %p\n", &pp);

//     return 0;
// }

// // 2nd function:

// #include <stdio.h>

// int main(){
//     char *countries[] = {"India, U.S.A, Japan, Russia, China, North Korea"};
//     int n = 7;

//     printf("The Stored Countries are: \n");
//     for(int i=0;i<n;i++){
//         printf("%s ", countries[i]);
//     }
//     return 0;
// }

// 3rd function: Reverse an array using pointers: 

#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    
    int *start = arr;
    int *end = arr + 6;
    int temp;

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for(int i = 0; i<7;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
    return 0;
}

