#include <iostream>
using namespace std;

// Function to generate and display multiplication tables
void table(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Table of " << arr[i] << ":\n";

        // Inner loop to calculate and display the table for the current number
        for (int j = 1; j <= 10; j++) {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }

        cout << endl; 
    }
}

int main() {
    int arr[5]; 

    cout << "Enter 5 numbers: ";

    // Loop to take 5 numbers as input from the user
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Call the function to generate tables for the numbers in the array
    table(arr, 5);

    return 0;
}
