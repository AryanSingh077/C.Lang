// // for malloc:

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr, n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*) malloc(n * sizeof(int));

//     if(ptr == NULL) {
//         printf("Memory allocation failed");
//         return 0;
//     }

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("Elements are:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);
//     return 0;
// }

// for calloc:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Elements after calloc initialization:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}

// // for realloc:

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr, n, newSize, i;

//     printf("Enter initial size: ");
//     scanf("%d", &n);

//     ptr = (int*) malloc(n * sizeof(int));

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("Enter new size: ");
//     scanf("%d", &newSize);

//     ptr = (int*) realloc(ptr, newSize * sizeof(int));

//     printf("Elements after realloc:\n");
//     for(i = 0; i < newSize; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);
//     return 0;
// }

// // for free:

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;

//     ptr = (int*) malloc(sizeof(int));

//     *ptr = 50;
//     printf("Value stored: %d\n", *ptr);

//     free(ptr);

//     printf("Memory freed successfully");

//     return 0;
// }