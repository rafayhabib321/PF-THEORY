#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    int id;          
    string name;     
    float gpa;       
    int marks[5];    
};

// Function to calculate the total marks of a student
int calculateTotal(const Student& s) {
    int total = 0; 

    // Loop to iterate through the marks array and calculate the total
    for (int i = 0; i < 5; i++) {
        total += s.marks[i];
    }

    return total; // Return the total marks
}

int main() {
    Student s; 

    
    cout << "-Enter student ID\n";
    cin >> s.id;

    cout << "\n-Name\n";
    cin >> s.name;

    cout << "\n-GPA\n";
    cin >> s.gpa;

    cout << "\n-Enter 5 marks\n";
    // Loop to input 5 marks for the student
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "-)";
        cin >> s.marks[i];
    }

    // Call the function to calculate total marks and store the result
    int total = calculateTotal(s);

    cout << "Total marks: " << total << endl;

    return 0;
}
