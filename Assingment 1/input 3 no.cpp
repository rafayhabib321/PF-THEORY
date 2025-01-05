#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Take input for the three numbers
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;

    // Use nested if statement to compare the numbers
    if (num1 == num2) {
        if (num2 == num3) {
            cout << "All values are equal\n";
        } else {
            cout << "They all are not equal\n";
        }
    } else {
        cout << "They all are not equal\n";
    }

    return 0;
}
