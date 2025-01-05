#include <iostream>
using namespace std;

int main() {
    double total_credit_hours = 0, weighted_sum = 0;
    int num_courses = 5;  // Fixed to 5 courses

    // Loop each courses to get credit hours and grade points
    for (int i = 1; i <= num_courses; i++) {
        double credit_hours, grade_point;
        
        // Take input for credit hours and grade point for each course
        cout << "-: Enter credit hours for course " << i << ":  ";
        cin >> credit_hours;
        cout << "-: Enter grade point for course " << i << ":  ";
        cin >> grade_point;

        //formula
        weighted_sum += credit_hours * grade_point;
        total_credit_hours += credit_hours;
    }

    // Calculate and display the SGPA
    double sgpa = weighted_sum / total_credit_hours;
    cout << "-: Your SGPA for this semester is: " << sgpa << endl;

    return 0;
}
