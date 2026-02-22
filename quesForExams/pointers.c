// #include <stdio.h>

// int main(){
//     int a = 10;
//     int *p;
//     p = &a;
//     printf("\n%d",a);
//     printf("\n%d",&a);
//     printf("\n%d",p);
//     printf("\n%d",*p);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[3] = {10,20,30};
//     int *p = arr;
//     printf("%d", *(p+1));
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int *p1 = &arr[1];
//     int *p2 = &arr[4];
//     printf("Address of p1 = %p\n", p1);
//     printf("Address of p2 = %p\n", p2);
//     int diff = p2-p1;
    
//     // (p2_address - p1_address) / sizeof(type)
    
//     // Using our example:
    
//     // (1016 - 1004) / 4
//     // = 12 / 4
//     // = 3
//     printf("Difference btwn p2 and p1= %d elements\n", diff);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr; // gives first value of arr;
//     printf("using pointers to get values of this array\n");
//     for(int i = 0;i<5;i++){
//         printf("arr[%d] = %d (Address: %p)\n",i,*(p+i),(p+i));
//         // printf("%d\n", arr[i]);
//     };
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p = arr; // pointer to first element
//     int sum = 0;
//     for(int i=0;i<5;i++){
//         sum += *(p+i);
//     }
//     printf("sum of array ele: %d", sum);
//     return 0;
// }

// // reversing an array using pointers:
// #include <stdio.h>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *start = arr;
//     int *end = arr+4;
//     int temp;

//     while(start<end){
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     printf("reversed array: ");
//     for(int i=0;i<5;i++){
//         printf("\n%d", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char str[] = "Aryan_Singh";
//     char *p = str;
//     while (*p !='\0')
//     {
//         printf("%c ",*p);
//         p++;
//     }
    
//     return 0;
// }

// #include <stdio.h>

// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// };
// int main(){
//     int a = 5, b=6;
//     printf("Before swap a =%d, b =%d\n", a,b);

//     swap(&a,&b);
//     printf("After swap a =%d, b =%d", a,b);
    
//     return 0;
// }

// #include <stdio.h>

// int add(int *x, int *y){
//     return *x + *y;
// }
// int main(){
//     int a = 6, b = 9;
//     int sum = add(&a,&b);
//     printf("Sum of a and b is : %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// void change_Value(int *x){
//     *x = 99;
// }
// int main(){
//     int a = 20;
//     printf("before fun call: a = %d\n", a);

//     change_Value(&a);
//     printf("after fun call: a = %d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char *names[] = {"Aryan", "Vinayak", "Jia", "Ahilya", "Jai"};
//     for(int i=0;i<5;i++){
        
//         printf("%s\n", names[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char *names[] = {"Aryan", "Vinayak", "Jia", "Ahilya", "Jai"};
//     int n = 5;
//     char *temp;

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(strcmp(names[i], names[j])>0){
//                 temp = names[i];
//                 names[i]=names[j];
//                 names[j]=temp;
//             }
//         }
//     }

//     printf("Sorted Names:\n");
//     for(int i=0;i<n;i++){
//         printf("%s\n", names[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a = 50;
//     int *p = &a;
//     int **pp = &p;
//     printf("%d\n", *pp);
//     printf("%d\n", **pp);
//     return 0;
// }

// #include <stdio.h>
//     int main() {
//     int a = 100;
//     int *p = &a;
//     int **pp = &p;
//     printf("Value of a = %d\n", a);
//     printf("Address of a = %p\n", &a);
//     printf("Value stored in pointer p = %p\n", p);
//     printf("Address of pointer p = %p\n", &p);
//     printf("Value stored in pointer to pointer pp = %p\n", pp);
//     printf("Value of a using **pp = %d\n", **pp);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows = 3, col = 3;
    int **arr;
    arr = (int **)malloc(rows * sizeof(int *));
    for(int i = 0;i<rows;i++){
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    int count = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            arr[i][j] = count++;
        }
    }

    printf("2D array using pointer to pointer:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    for(int i =0; i<rows;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}