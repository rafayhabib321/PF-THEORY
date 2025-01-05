#include <iostream>
#include <iomanip> //to make easier for user to understand.
using namespace std;

int main (){
	//initialize and declaration
	int num,i=1,sum=0;
	
	cout<<"Enter the value for the nth term : ";
	cin>>num;
	cout<<setw(39)<<"The series of the "<<num<<"th term is :\n\n";
	
	//using while loop for series
	while(i<num){
		cout<<setw(30)<<i<<" X "<<i<<" = "<<i*i<<endl;
		sum+=i*i;
		i++;
	};
	cout<<'\n'<<setw(45)<<"Sum of the series is : "<<sum;		//sum of the result
	return 0;
}