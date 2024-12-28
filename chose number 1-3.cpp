#include <iostream>
#include <cmath> // For sqrt() function

using namespace std;

int main() {
    int choice;
    double number;

    // Display menu
    cout << "Choose an option from the menu (1-4):\n";
    cout << "1. Calculate the square root of a number.\n";
    cout << "2. Calculate the cube of a number.\n";
    cout << "3. Print the number 50 times.\n";
    cout << "4. Print the multiplication table of the number.\n";
    cout << "Enter your choice: ";
    cin >> choice;

    //ask for number if choice is correct
    if (choice >= 1 && choice <= 4) {
        cout << "Enter the number: ";
        cin >> number;
    }

    // Switch statement
    switch (choice) {
        case 1:
            // Square root
            if (number < 0) {
                cout << "undefined.\n";
            } else {
                cout << "Square root of " << number << " is " << sqrt(number) << endl;
            }
            break;

        case 2:
            // Cube
            cout << "Cube of " << number << " is " << (number * number * number) << endl;
            break;

        case 3:
            // Print number 50 times
            cout << "The number " << number << " printed 50 times:\n";
            for (int i = 0; i < 50; i++) {
                cout << number << " \n";
            }
            cout << endl;
            break;

        case 4:
            // Multiplication table
            cout << "Multiplication table of " << number << ":" << endl;
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;

        default:
            // Invalid choice
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
