#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
    int marks[5];
};

int calculateTotal(const Student& s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s.marks[i];
    }
    return total;
}

int main() {
    Student s;
    cout << "-Enter student ID\n";
    cin >> s.id;
    
    cout<<"\n-Name\n";
	cin >> s.name;
	
	cout<<"\n-GPA\n";
	cin >> s.gpa;
	
	cout<<"\n-Enter 5 marks\n";
    for (int i = 0; i < 5; i++) {
    	cout<<i+1<<"-)";
        cin >> s.marks[i];
    }

    int total = calculateTotal(s);
    cout << "Total marks: " << total << endl;

    return 0;
}
