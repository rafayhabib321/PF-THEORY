#include <stdio.h>
#include <stdlib.h>	 // For the `abs` function

int main() {
    int n, i, j, minSum, pair1, pair2;

    printf("Input the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
     // Input the elements of the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
    	printf("-)");
        scanf("%d", &arr[i]);
    }

	  // Initialize `minSum` with the absolute sum of the first pair
    minSum = abs(arr[0] + arr[1]);
    pair1 = arr[0];
    pair2 = arr[1];

	// Nested loop to find the pair with the sum closest to zero
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
        	 // Check if the absolute sum of the current pair is less than `minSum`
            if (abs(arr[i] + arr[j]) < minSum) {
                minSum = abs(arr[i] + arr[j]); // Update `minSum`
                pair1 = arr[i];               // Store the first element of the pair
                pair2 = arr[j];               // Store the second element of the pair
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
