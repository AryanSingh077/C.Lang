// #include<stdio.h>

// void somethin();

// int main(){
//     int a;
//     somethin();
//     return 0;
// }

// void somethin(){
//     printf("Want to say somethin");
// }

// #include <stdio.h>

// // This worker GIVES you a number
// int giveMeFive() {
//     return 5;
// }

// // This worker just SAYS something
// void sayHello() {
//     printf("Hello there!\n");
// }

// int main() {
//     sayHello(); // Just call it
    
//     int x = giveMeFive(); // Call it and catch the 5 in 'x'
//     printf("The number is %d", x);
    
//     return 0;
// }


// #include <stdio.h>
// int sum();

// int sum(int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }


// void display();

// void display(){
//     printf("this is your display.");
//     }
// int main(){
//     int d = sum(7,5);
//     printf("%d", d);

//     display();
//     return 0;
// }


#include <stdio.h>

    void sum();
    
    void sum(int a, int b){
        int c;
        c = a+b;
        printf("%d", c);
    }

    int mul();
    int mul(int x, int y){
        int z;
        z = x*y;
        return z;
    }

int main(){
    // sum(7,8);
    int r = mul(7,8);
    printf("%d", r);
    return 0;
}