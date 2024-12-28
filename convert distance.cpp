#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double miles;
	cout<<"Enter distance in miles between SHU and your house.\n";
	cin>>miles;
	
	//converting distance
    double kilometers = miles * 1.60934;
    double meters = kilometers * 1000;
    double centimeters = meters * 100;
    double millimeters = centimeters * 10;
    double micrometers = millimeters * 1000;
    

	cout << fixed << setprecision(1);  // Set output precision to 2 decimal places
	  
    cout << "\nThe distance of " << miles << " miles is equal to:\n";
    cout << kilometers << " :kilometers\n";
    cout << meters << " :meters\n";
    cout << centimeters << " :centimeters\n";
    cout << millimeters << " :millimeters\n";
    cout << micrometers << " :micrometers\n";
	return 0;
}