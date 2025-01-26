#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    int id;          
    string name;     
    float gpa;       
    int marks[7];    
} globalStudent;      // Global student instance

// Function to print the details of a student
void printStudent(const Student& s) {
    cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
    cout << "Marks: ";

    // Loop through the marks array to print all marks
    for (int i = 0; i < 7; i++) {
        cout << s.marks[i] << " ";
    }
    cout << endl;
}

int main() {
    // Initialize a global student instance with hardcoded data
    Student globalStudent = {13, "Ali", 3.5, {90, 85, 88, 92, 87, 80, 78}};
    Student localStudent; 

    cout << "-Enter student ID\n";
    cin >> localStudent.id;

    cout << "-Name\n";
    cin >> localStudent.name;

    cout << "GPA\n";
    cin >> localStudent.gpa;

    cout << "7 marks:\n";
    // Loop to input marks for 7 subjects
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << "-)";
        cin >> localStudent.marks[i];
    }

    printStudent(globalStudent);
    printStudent(localStudent);

    return 0;
}
