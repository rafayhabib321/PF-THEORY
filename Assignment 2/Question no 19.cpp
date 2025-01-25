#include <iostream>
using namespace std;

void table(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Table of " << arr[i] << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
        cout << endl;
    }
}

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    table(arr, 5);
    return 0;
}
