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

//Boolean operators '&&'
    
    cout << boolVar1 << "&&" <<boolVar2 << "=" << (boolVar1 && boolVar2) <<endl;

    //Boolean operators '||'

    cout << boolVar1 << "||" <<boolVar2 << "=" << (boolVar1 || boolVar2) <<endl;

    //Boolean operators '!'

    cout << boolVar1 << "!" <<boolVar2 << "=" << (!boolVar1) <<endl;

return 0;

}