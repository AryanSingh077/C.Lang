// Write programs to implement for, while and do-while loop control statements on suitable problems.

// #include <stdio.h>

// int main(){
//     int rows = 4;
//     for(int i = 0;i<=rows;i++){
//         for(int j=0;j<=rows-i;j++){
//             printf(" ");
//         }

//         for(int k=0;k<=i;k++){
//             printf("%c ", 'A'+k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int rows = 4;
//     int i = 0;
//     while(i<=rows){

//         int j = 0;
//         while(j<=rows-i){
//             printf(" ");
//             j++;
//         }

//         int k = 0;
//         while(k<=i){
//             printf("%c ", 'A'+k);
//             k++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int rows = 4;
    int i = 0;
    
    do{
        int j = 0;
        do{
            printf(" ");
            j++;
        } while(j<=rows-i);
        
        int k = 0;
        do{
            printf("%c ",'A'+k );
            k++;
        } while(k<=i);
        
        printf("\n");
        i++;

    } while(i<=rows);

    return 0;
}