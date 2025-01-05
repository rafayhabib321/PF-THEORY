#include <iostream>
using namespace std;
int main(){
	int a;
	
	//input marks
	cout<<"Enter your marks.\n";
	cin>>a;

	//using nested if for grades
if(a>=90){
	cout<<"your grade is \'A+\'.";
}
if(a>=70&&a<90){						//using logical operator
	cout<<"your grade is \'A\'.";
}
if(a>=50&&a<70){						//using logical operator
	cout<<"your grade is \'B\'.";
}
if(a<50){
	cout<<"your grade is \'F\'.";
}		
	return 0;
}