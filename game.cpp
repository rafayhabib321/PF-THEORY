#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

    // Display main menu
    cout << "Game Menu:" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Settings" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> mainChoice;

    switch (mainChoice) {
        case 1:
            // Start Game menu
            cout << "\nStart Game Options:" << endl;
            cout << "1. New Game" << endl;
            cout << "2. Load Game" << endl;
            cout << "3. Back to Main Menu" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "Starting a New Game..." << endl;
                    break;
                case 2:
                    cout << "Loading Saved Game..." << endl;
                    break;
                case 3:
                    cout << "Returning to Main Menu..." << endl;
                    break;
                default:
                    cout << "Invalid option in Start Game menu!" << endl;
            }
            break;

        case 2:
            // Settings menu
            cout << "\nSettings Options:" << endl;
            cout << "1. Graphics Settings" << endl;
            cout << "2. Audio Settings" << endl;
            cout << "3. Gameplay Settings" << endl;
            cout << "4. Back to Main Menu" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "Opening Graphics Settings..." << endl;
                    break;
                case 2:
                    cout << "Opening Audio Settings..." << endl;
                    break;
                case 3:
                    cout << "Opening Gameplay Settings..." << endl;
                    break;
                case 4:
                    cout << "Returning to Main Menu..." << endl;
                    break;
                default:
                    cout << "Invalid option in Settings menu!" << endl;
            }
            break;

        case 3:
            // Exit
            cout << "Exiting the game. Goodbye!" << endl;
            break;

        default:
            // Invalid choice in main menu
            cout << "Invalid choice in the main menu!" << endl;
    }

    return 0;
}
