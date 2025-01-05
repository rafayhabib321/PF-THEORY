#include<iostream>
#include<iomanip>
using namespace std;

int main (){
	
	cout<<"Counter 2 to 25..\n\n";
	
	//using loop for counting
	for(int i=2;i<=25;i++){
		
			if(i==13||i==16||i==19){		//if these num present compiler ignore it
			continue;
			
		}if(i==24){
			break;
		}
		cout<<setw(9)<<i<<endl;
	}
	return 0;
}