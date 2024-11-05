#include <iostream>

using namespace std;

//Variable Declarations

int main() {
    int num1, num2; //Declare two integer variables
    bool boolVar1 = true, boolVar2 = false; //Declare two Boolean variables

//Prompt User Input and Capture Input

    cout << "Enter First Number" << endl;
    cin >> num1;
    cout << "Enter Second Number" << endl;
    cin >> num2;

//******Arithmetic Operators*******

     //Addition operator '+'

    cout << "Sum Of " << num1 << "+" << num2 << "=" << num1 + num2 << endl;

    //Subtraction Operator '-'

    cout << "Difference of " << num1 << "-" << num2 << "=" << num1 - num2 << endl;

    //Multiplication Operator '*'

    cout << "Product of " << num1 << "*" << num2 << "=" << num1 * num2 << endl;

    //Division Operator '/'

    cout << "Division of " << num1 << "/" << num2 << "=" << num1 / num2 << endl;

    //Modulus Operator '%'

    cout << "Modulus of " << num1 << "%" << num2 << "=" << num1 % num2 << endl;

    //Increment Operator '++' as a prefix

    cout << "Prefix Increment num1 by 1 :" << ++num1 << endl;

    //Increment Operator '++' as a postfix

    cout << "Postfix Increment num1 by 1 :" << num1++ << endl;

    // Decrement operator '--' as a prefix

    cout << "Prefix Decrement num1 by 1 :" << --num1 << endl;

    // Decrement operator '--' as a postfix

    cout << "Postfix Decrement num1 by 1 :" << num1-- << endl;

    // Increment and assign operation e.g increase num1 by 3

    num1 += 3; //This is  the same  as num1 = num1+3
    cout << "Increment and assign num1 by 3 :" << num1 << endl;

    return 0;

}