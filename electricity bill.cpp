#include <iostream>
using namespace std;

int main() {
    int previousReading, currentReading, unitsConsumed;
    double costPerUnit, grossBill, finalBill;

    // Take input for current and previous readings
    cout << "Enter the previous reading: ";
    cin >> previousReading;
    cout << "Enter the current reading: ";
    cin >> currentReading;

    // Calculate total units consumed
    if (currentReading < previousReading) {
        cout << "Error: Current reading cannot be less than previous reading!" << endl;
        return 1; // Exit program
    }

    unitsConsumed = currentReading - previousReading;
    cout << "Units consumed: " << unitsConsumed << endl;

    // Calculate gross bill based on units consumed
    if (unitsConsumed <= 300) {
        costPerUnit = 4.0;
        grossBill = unitsConsumed * costPerUnit;
        double subsidy = grossBill * 0.03; // 3% subsidy
        finalBill = grossBill - subsidy;
        cout << "Gross bill: Rs. " << grossBill << endl;
        cout << "Subsidy (3%): Rs. " << subsidy << endl;
    } 
    else if (unitsConsumed <= 400) {
        costPerUnit = 6.0;
        grossBill = unitsConsumed * costPerUnit;
        finalBill = grossBill;
        cout << "Gross bill: Rs. " << grossBill << endl;
    } 
    else {
        costPerUnit = 7.0;
        grossBill = unitsConsumed * costPerUnit;
        double surcharge = grossBill * 0.04; // 4% surcharge
        finalBill = grossBill + surcharge;
        cout << "Gross bill: Rs. " << grossBill << endl;
        cout << "Surcharge (4%): Rs. " << surcharge << endl;
    }

    // Display final bill
    cout << "Final bill: Rs. " << finalBill << endl;

    return 0;
}
