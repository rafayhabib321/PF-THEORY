#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, isEqual = 1;

    printf("Input Rows and Columns of the 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Input Rows and Columns of the 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be compared.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], sum[r1][c1];

    printf("Input elements in the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("element : [%d],[%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("element : [%d],[%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
            if (mat1[i][j] != mat2[i][j]) {
                isEqual = 0;
            }
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
