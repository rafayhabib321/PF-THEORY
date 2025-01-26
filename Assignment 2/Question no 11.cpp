#include <stdio.h>

int main() {
    int mat[3][3], i, j, isIdentity = 1, min, max;

    printf("Input elements in the matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("-)");
            scanf("%d", &mat[i][j]);
            
            // Initialize `min` and `max` with the first element
            if (i == 0 && j == 0) {
                min = max = mat[i][j];
            }
            
             // Update `min` if the current element is smaller
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
            
             // Update `max` if the current element is larger
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
            
            // Diagonal elements should be 1, and non-diagonal elements should be 0
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
            	// Mark as not an identity matrix
                isIdentity = 0;
            }
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    printf("Minimum value in the matrix: %d\n", min);
    printf("Maximum value in the matrix: %d\n", max);

    return 0;
}
