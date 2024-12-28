#include <iostream>
using namespace std;
int main(){

	char a = 'm';
	char b = 'M';
	char c;
	//take input for gender
	cout<<"Enter your gender.\n";
	cin>>c;
	
	//check if m or M you are a male otherwise female
if(c==a||b==c){
	cout<<"You are a male.\n";
}else{
	cout<<"you are a female.\n";
}
	return 0;
}