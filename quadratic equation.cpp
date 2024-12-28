#include <iostream> 
#include <cmath>  
using namespace std; 
 
int main() { 
    float a = 1.5;       //fixed value for a,b
	float b = -4.2;
    int c; 
    double x1, x2, numerator1, numerator2, denominator; 
 
 
 
    cout<<"   - b + sqrt(b^2 - 4ac)\n     (a/b)^2 + (b/c)^2\n";
 
    // input value for c
    cout << "Enter the \'c\' value : "; 
    cin >> c; 
 
    // Calculate the numerator for both cases (+ and -) 
    numerator1 = -b + sqrt(pow(b, 2) - 4 * a * c); 
    numerator2 = -b - sqrt(pow(b, 2) - 4 * a * c); 
 
    // Calculate the denominator of equation 
    denominator = pow((a / b), 2) + pow((b / c), 2); 
 
    // Calculate x1 and x2 which are factors 
    x1 = numerator1 / denominator; 
    x2 = numerator2 / denominator; 
 
    // Display the results according to the equation 
    cout << "-:The value of x1 is: " << x1 << endl; 
    cout << "-:The value of x2 is: " << x2 << endl;
        return 0; 
}