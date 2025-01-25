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
    int n, i, new_val;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element : %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Input the new value to insert: ");
    scanf("%d", &new_val);

    arr[n] = new_val;
    n++;

    sort(arr, n);

    printf("The array after sorting in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
