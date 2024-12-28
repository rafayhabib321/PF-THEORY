#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Take input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Using logical AND (&&)
    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else {
        cout << "At least one number is not positive." << endl;
    }

    // Using logical OR (||)
    if (num1 > 0 || num2 > 0) {
        cout << "At least one number is positive." << endl;
    } else {
        cout << "Both numbers are not positive." << endl;
    }

    // Using logical NOT (!)
    if (!(num1 == num2)) {
        cout << "The numbers are not equal." << endl;
    } else {
        cout << "The numbers are equal." << endl;
    }
        
    return 0;
}
