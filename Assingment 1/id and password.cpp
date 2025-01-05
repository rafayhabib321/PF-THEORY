#include <iostream>
#include <string>

using namespace std;

int main() {
    //saved if
    string ID = "abdulrafy12";
    string Password = "123";
    string userName = "Rafay";

    string inputID, inputPassword;

    //enter ID
    cout << "Enter your ID: ";
    cin >> inputID;

    // Outer switch to check if the ID matches
    switch (inputID == ID) {
        case true:
            // If the ID is valid
            cout << "Enter your password: ";
            cin >> inputPassword;

            // Nested switch to check if the password matches
            switch (inputPassword == Password) {
                case true:
                    cout << "\n\t\t\tWelcome, " << userName << "!" << endl;
                    break;
                case false:
                    cout << "Incorrect Password!" << endl;
                    break;
            }
            break;

        case false:
            // If the ID is invalid
            cout << "Incorrect ID!" << endl;
            break;
    }

    return 0;
}
