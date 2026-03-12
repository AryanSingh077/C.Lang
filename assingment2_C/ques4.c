// call by value

// 1. Function with no arguments and no return value

// #include <stdio.h>

// void sum(){
//     int a,b;
//     printf("Enter your no.: ");
//     scanf("%d%d", &a, &b);
//     printf("Sum is = %d", a+b);
// }
// int main(){
//     sum();
//     return 0;
// }

// // 2. Function with argument and no return;

// #include <stdio.h>

// void sum(int a, int b){
//     printf("The sum is: %d", a+b);
// }

// int main(){
//     int x,y;
//     printf("Enter your no.: ");
//     scanf("%d%d", &x,&y);
//     sum(x,y);
//     return 0;
// }

// // 3. Function with no arguments but return value
// #include <stdio.h>

// int sum(){
//     int a,b;
//     printf("Enter your no: ");
//     scanf("%d%d", &a,&b);
//     return a+b;
// }

// int main(){
//     int A = sum();
//     printf("The sum is: %d", A);
//
//     return 0;
// }

// // 4. Function with arguments and return value

// #include <stdio.h>

// int add(int a, int b){
//     return a+b;
// }
// int main(){
//     int x,y;
//     printf("Enter your no.: ");
//     scanf("%d%d", &x, &y);
//     printf("The sum is: %d", add(x,y));
//     return 0;
// }

// // call by reference:

// #include <stdio.h>

// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main(){
//     int a,b;

//     printf("Enter two numbers a and b: \n");
//     scanf("%d%d", &a, &b);

//     printf("Before swaping a and b: a = %d, b = %d\n", a,b);
    
//     swap(&a,&b);
    
//     printf("After swaping a and b: a = %d, b = %d\n", a,b);

//     return 0;
// }

// recursive function:

#include <stdio.h>

int factorial(int n) {
    
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int  num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("The factorial of %d is %d.\n", num, factorial(num));

    return 0;
}