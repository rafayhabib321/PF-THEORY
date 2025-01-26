#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, isEqual = 1;	// `isEqual` is initialized to 1 (true)

	// Input dimensions of the first matrix
    printf("Input Rows and Columns of the 1st matrix: ");
    scanf("%d %d", &r1, &c1);

	 // Input dimensions of the second matrix
    printf("Input Rows and Columns of the 2nd matrix: ");
    scanf("%d %d", &r2, &c2);
	
	// Check if matrices can be compared (dimensions must be the same)
    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be compared.\n");
        return 0;
    }
	
	// Declare matrices
    int mat1[r1][c1], mat2[r2][c2], sum[r1][c1];


    // Input elements for the first matrix
    printf("Input elements in the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("element : [%d],[%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

   // Input elements for the second matrix
    printf("Input elements in the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("element : [%d],[%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
            
             // Check if corresponding elements are equal
            if (mat1[i][j] != mat2[i][j]) {
                isEqual = 0;
            }
            // Calculate the sum of corresponding elements
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The first matrix is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

	    // Check and print whether the matrices are equal
    if (isEqual) {
        printf("Two matrices are equal.\n");
    } else {
        printf("Two matrices are not equal.\n");
    }

    printf("The addition of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
