#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    if (age>=4) {
        cout << "Admitted! Proceed to Registration" << endl;
    }
    else {
        cout << "Declined! Minimum Age not Reached" <<endl;
    }

    //Using Ternary Operator
    string message = (age >= 4)? "Admitted! Proceed to Registration." : "Declined! Minimum Age not Reached.";
    cout << message << endl;

return 0;    
}