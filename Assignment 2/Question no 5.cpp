#include<iostream>
using namespace std;

int main (){
	//initialize and declaration
	 int rows, i = 5;

    cout << "Input number of rows: ";
    cin >> rows;
    
    
	//using nested do-while loop.
    do {
        int j = i;   //initializing in loop for dependent to outer loop
        do {
            cout << j << " "; 
            j--; 
        } while (j >= 1); 
        cout << endl;
        i--; 
    } while (i >= 1); 

	
	return 0;
}