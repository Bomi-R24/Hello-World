#include <iostream>
using namespace std;

int main () {
double num1, num2, result;
char operation;

cout << "Enter 1st Number:";
cin >> num1;
cout << "Enter 2nd Number:";
cin >> num2;

cout <<  "Choose an Operation (+,-,*,/): ";
cin >> operation;

switch(operation) {
    case '+':
    result = num1 + num2;
    cout << "Result: " << num1 << "+" << num2 << "=" << result << endl;
    break;

    case '*':
    result = num1 * num2;
    cout << "Result: " << num1 << "*" << num2 << "=" << result << endl;
    break;

    case '-':
    result = num1 - num2;
    cout << "Result: " << num1 << "-" << num2 << "=" << result << endl;
    break;

    case '/':
    result = num1 / num2;
    cout << "Result: " << num1 << "/" << num2 << "=" << result << endl;
    break;
}
return 0;


}