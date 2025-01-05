#include <iostream>
using namespace std;

int main() {
    int schoolChoice, departmentChoice;

    // Display main menu for schools
    cout << "Select a School:" << endl;
    cout << "1. School of Computer Science" << endl;
    cout << "2. School of Business" << endl;
    cout << "3. School of Engineering" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> schoolChoice;

    switch (schoolChoice) {
        case 1: // School of Computer Science
            cout << "\nYou selected: School of Computer Science" << endl;
            cout << "Select a Department:" << endl;
            cout << "1. Department of Informatics" << endl;
            cout << "2. Department of Machine Learning" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Informatics" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Machine Learning" << endl;
                    break;
                default:
                    cout << "Invalid department choice!" << endl;
            }
            break;

        case 2: // School of Business
            cout << "\nYou selected: School of Business" << endl;
            cout << "Select a Department:" << endl;
            cout << "1. Department of Commerce" << endl;
            cout << "2. Department of Purchasing" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Commerce" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Purchasing" << endl;
                    break;
                default:
                    cout << "Invalid department choice!" << endl;
            }
            break;

        case 3: // School of Engineering
            cout << "\nYou selected: School of Engineering" << endl;
            cout << "Select a Department:" << endl;
            cout << "1. Department of Mechanical Engineering" << endl;
            cout << "2. Department of Mechatronics Engineering" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Mechanical Engineering" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Mechatronics Engineering" << endl;
                    break;
                default:
                    cout << "Invalid department choice!" << endl;
            }
            break;

        default: // Invalid school choice
            cout << "Invalid school choice!" << endl;
    }

    return 0;
}
