#include <iostream>
#include <iomanip>  //to make easier for user to understand.
using namespace std;

int main (){
	//initialize
	int num1,num2;
	
	cout<<"Enter the starting number.\n 1: ";
	cin>>num1;									//input for num1
	
	cout<<"Enter the ending number.\n 2: ";
	cin>>num2;									//input for num2
	
	cout<<"Odd Numbers"<<setw(20)<<"Even Numbers\n";
	for(int i=num1;i<=num2;i++){				//using loop
		if(i %2 ==0){
			cout<<setw(17)<<i<<"\t"<<endl;
		}else{
			cout<<setw(4)<<i<<"\t";
		}
	};
	return 0;
}