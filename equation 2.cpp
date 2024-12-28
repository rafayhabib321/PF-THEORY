#include <iostream>
#include <cmath> // For sqrt()

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c (a != 0):\n";
    cin >> a >> b >> c;
    cout<<"a = "<< a <<"\nb = "<< b <<"\nc = " << c <<endl; 
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation.\n";
        return 1; // Exit the program
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Roots are real and unequal
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and unequal:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // Roots are real and equal
        double root = -b / (2 * a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root = " << root << endl;
    } else {
        // Roots are imaginary
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
