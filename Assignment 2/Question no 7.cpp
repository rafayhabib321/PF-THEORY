#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element : %d : ", i+1);
        scanf("%d", &arr1[i]);

        arr2[i] = arr1[i];

        if (arr1[i] % 2 == 0) {
            sum += arr1[i];
        }
    }

    printf("\nThe elements stored in the first array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements copied into the second array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
	
	printf("\n\nSum of even no :\n");
    printf("Sum = %d\n", sum);

    return 0;
}
