#include <stdio.h>

int main(){
    int age;
    // printf("Enter your age: ");
    scanf("%d", &age);

    if(age>10){
        printf("Age is %d which is greater than 10\n", age);
    }
    else {
        printf("Age is %d which is less and 10\n", age);
    }
    return 0;
}