#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, minSum, pair1, pair2;

    printf("Input the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
    	printf("-)");
        scanf("%d", &arr[i]);
    }

    minSum = abs(arr[0] + arr[1]);
    pair1 = arr[0];
    pair2 = arr[1];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (abs(arr[i] + arr[j]) < minSum) {
                minSum = abs(arr[i] + arr[j]);
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("The given array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe pair of elements whose sum is closest to zero are: [%d, %d]\n", pair1, pair2);

    return 0;
}
