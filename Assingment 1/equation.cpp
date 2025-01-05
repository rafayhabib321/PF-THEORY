#include <iostream> 
using namespace std; 
 
int main() { 
    float A, b, x, y, a, c, d; 
 	
 	//diplaying equation.
 	cout<<"A = 7*7*b ( x*y + a ) / c - 0.8 + 2*b *(d)\n\t ( x + a )* (1 / y )\n"; 
 	
    cout << "Enter the value of b: "; 
    cin >> b; 
 
    cout << "Enter the value of x: ";
     cin >> x; 
 
    cout << "Enter the value of y: "; 
    cin >> y; 
 
    cout << "Enter the value of a: "; 
    cin >> a; 
 
    cout << "Enter the value of c: "; 
    cin >> c; 
 
    cout << "Enter the value of d: "; 
    cin >> d; 
 
    // solving numerator and denominator. 
 
    float numerator = (7 * 7 * b * (x * y + a) / c) - 0.8 + 2 * b * d; 
    float denominator = (x + a) * (1 / y); 
 
    A = numerator / denominator; 
    cout << "The value of A is: " << A << endl; 
 
    return 0; 
}