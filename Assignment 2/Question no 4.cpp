#include<iostream>
using namespace std;

int main (){
	//initialize and declaration
	int num,i=1;
	
	cout<<"Input number of rows :";
	cin>>num;
	
	//using loop
	while(i<=num){
		
		int j= 1;		 //initializing in loop for dependent to outer loop
		
		while(j<= i) {
			cout<< i;
			j++;
		}
		cout<<endl;
		i++;
	};
	
	return 0;
}