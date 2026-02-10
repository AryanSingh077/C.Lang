#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int isUpper = 1, isLower = 1, isDiagonal = 1;

    printf("Enter rows and columns (e.g., 3 3): ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix must be square (e.g., 3x3) to check these properties.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Logic Check
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Check Upper Triangular: if any element BELOW diagonal is not zero
            if (i > j && matrix[i][j] != 0) {
                isUpper = 0;
            }
            // Check Lower Triangular: if any element ABOVE diagonal is not zero
            if (i < j && matrix[i][j] != 0) {
                isLower = 0;
            }
        }
    }

    // A diagonal matrix is both Upper AND Lower triangular
    if (isUpper && isLower) {
        printf("The matrix is a DIAGONAL matrix.\n");
    } else if (isUpper) {
        printf("The matrix is an UPPER TRIANGULAR matrix.\n");
    } else if (isLower) {
        printf("The matrix is a LOWER TRIANGULAR matrix.\n");
    } else {
        printf("The matrix is a general matrix (neither triangular nor diagonal).\n");
    }

    return 0;
}