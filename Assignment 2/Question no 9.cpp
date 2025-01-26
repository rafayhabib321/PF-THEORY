#include <stdio.h>

// Function to sort an array in descending order
void sort(int arr[], int size) {
    int i, j, temp;
	
	 // Loop through each element in the array
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
        	
        	// Swap if the current element is smaller than the next
            if (arr[i] < arr[j]) {
                temp = arr[i];    // Store current element temporarily
                arr[i] = arr[j];  // Place the larger element in the current position
                arr[j] = temp;    // Move the smaller element to the next position
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

	// Add the new value to the end of the array
    arr[n] = new_val;
    
    // Increment the array size
    n++;

 // Sort the array in descending order
    sort(arr, n);

    printf("The array after sorting in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
