#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Ask user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Using switch-case to determine the maximum number
    switch (num1 > num2) {
        case true:  // if num1 is greater than num2
            cout << "The maximum number is: " << num1 << endl;
            break;
        case false:  // if num2 is greater or equal to num1
            cout << "The maximum number is: " << num2 << endl;
            break;
        default:
            // This is a fallback, but it won't actually be used in this case
            cout << "Invalid input!" << endl;
            break;
    }

    return 0;
}