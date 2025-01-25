#include <stdio.h>

void sort(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, count = 0;

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n];

    printf("Input %d elements in the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element : %d : ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Input %d elements in the second array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element : %d : ", i+1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[i + n] = arr2[i];
    }

    sort(merged, 2 * n);

    for (i = 0; i < 2 * n - 1; i++) {
        if (merged[i] == merged[i + 1]) {
            count++;
        }
    }

    printf("The merged array in descending order is:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\nTotal number of duplicate elements found in the array is: %d\n", count);

    return 0;
}
