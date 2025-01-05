#include<iostream>
using namespace std;

int main (){
	//initialize and declaration
	int num,i=0,j=0;
	
	cout<<"Enter ( 0 ) to exit.\n";
	cout<<"Enter positive or negative numbers.\n";
	do{												//using loop
	cout<<"-> : ";
	cin>>num;
		if(num>0){
			i++;
		}if(num<0){
			j++;
		}
	}while(num!=0);
		cout<<"Positive numbers are : "<<i<<endl;
		cout<<"Negative numbers are : "<<j<<endl;
	
	
	return 0;
}