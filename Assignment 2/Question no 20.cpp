#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the square root of a given number
double sqrRoot(double x) {
    return sqrt(x); 
}

// Function to calculate the sum of squares and product of three numbers
void calc(double r1, double r2, double r3, double &sum, double &prod) {
    sum = pow(r1, 2) + pow(r2, 2) + pow(r3, 2); 
    prod = r1 * r2 * r3;
}

// Function to process input values, calculate their square roots, and pass them to calc
void process(double a, double b, double c, double &sum, double &prod) {
    double r1 = sqrRoot(a), r2 = sqrRoot(b), r3 = sqrRoot(c); 
    calc(r1, r2, r3, sum, prod); 
}

int main() {
    double a, b, c, sum, prod;

    cout << "Enter three numbers:\n";

    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // Call process to compute results
    process(a, b, c, sum, prod);

    cout << "\nResults:\n";
    cout << "Sum of squares: " << sum << endl;
    cout << "Product of square roots: " << prod << endl;

    return 0;
}
