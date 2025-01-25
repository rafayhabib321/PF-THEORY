#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, rem, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate Armstrong sum
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
