#include <iostream>
#include <cmath>
using namespace std;

// 1. Draw table of a number
void solve(int num) {
    cout << "Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// 2. Sum of squares of 3 floats
void solve(float a, float b, float c) {
    float result = (a * a) + (b * b) + (c * c);
    cout << "Sum of squares: " << result << endl;
}

// 3. Average of 4 integers
float solve(int a, int b, int c, int d) {
    return (a + b + c + d) / 4.0;
}

// 4. Function template for sum of squares
template <typename T>
void solve(T a, T b, T c) {
    T result = (a * a) + (b * b) + (c * c);
    cout << "Sum of squares (template): " << result << endl;
}

int main() {
    // Part 1
    solve(5);

    // Part 2
    solve(2.5f, 3.5f, 4.5f);

    // Part 3
    float avg = solve(10, 20, 30, 40);
    cout << "Average: " << avg << endl;

    // Part 4 (template)
    solve(3, 4, 5);
    solve(2.2f, 3.3f, 4.4f);

    return 0;
}
