#include <iostream>

using namespace std;


int main() {
    int num1, num2; //Declare two integer variables
    bool boolVar1 = true, boolVar2 = false; //Declare two Boolean variables

//Prompt User Input and Capture Input

    cout << "Enter First Number" << endl;
    cin >> num1;
    cout << "Enter Second Number" << endl;
    cin >> num2;

//***** Comparison Operators********

//Greater than operator '>'

cout << num1 << "Greater than " << num2 << "=" << (bool) (num1 > num2) << endl;

//Less than operator '<'

cout << num1 << "Less than " << num2 << "=" << (bool) (num1 < num2) << endl;

// Equal to operator == '>'

cout << num1 << "Equal to " << num2 << " = " << (bool)(num1 == num2) <<endl;

// Not equal to operator !='>'

cout << num1 << "Not equal to " << num2 << " = " << (bool)(num1 != num2) <<endl;

return 0;


}