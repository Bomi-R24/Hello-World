#include <iostream>
using namespace std;

int main() {
    //Declare Necessary Variables
    int age;

    cout << "Please enter the Childs Age: ";
    cin >> age;

    if (age>=7) {
        cout << "Admit to Grade School";
    }
    else if (age>=5) {
        cout << "Admit to Kindergarten";
    }
    else if (age>=3) {
        cout << "Admit to Pre - School";
    }
    else if (age>=1) {
        cout << "Admit to Play Group";
    }
    else {
        cout << "Rejected";
    }
    
    return 0;
}

