#include <iostream>

using namespace std;

int main() {
  
    char gender;      // Gender as character 'F' or 'M'
    char city;        // City name as character 'K', 'H', 'S', 'G'
    int age;          // Age of the person
    double salary = 35000;  // Base salary

    // Take inputs for gender, age, and city
    cout << "Enter gender (F for Female, M for Male): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter city (K for Karachi, H for Hyderabad, S for Sukker, G for Ghotki): ";
    cin >> city;

    //Female, age between 25-35, and from Karachi or Hyderabad
    if (gender == 'F' || gender == 'f') {
        if ((age >= 25 && age <= 35) && ((city == 'K' || city == 'H') || (city== 'k' || city== 'h'))) {
            salary += 2000;  // Add 2000 to salary
            cout << "Net salary after addition: " << salary << endl;
        } else {
            cout << "Present salary: " << salary << endl;
        }
    }

    //Male, age between 25-40, and from Sukker or Ghotki
    else if (gender == 'M' || gender == 'm') {
        if ((age >= 25 && age <= 40) && ((city == 'S' || city == 'G') || (city== 's' || city== 'g'))) {
            salary += 2500;  // Add 2500 to salary
            cout << "Net salary after addition: " << salary << endl;
        } else {
            cout << "Present salary: " << salary << endl;
        }
    }

    //if condition not met 
    else {
        cout << "Present salary: " << salary << endl;
    }

    return 0;
}
