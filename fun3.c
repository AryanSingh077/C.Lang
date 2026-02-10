// 3. Function with no arguments but return value
#include <stdio.h>

int add()
{
    int a, b;
    scanf("%d %d", &a, &b);   
    return a + b;
}

int main()
{
    int sum = add();
    printf("Sum = %d\n", sum);
    return 0;
}
