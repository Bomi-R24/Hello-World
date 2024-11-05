#include <iostream>
#include <string>

using namespace std;

int main() {

    //Declare a string variable

    string myName, description;

    //Prompt user for full name

    cout << "Please Enter Your Full Name: ";
    cin >> myName;

    cout << "Your Name is " << myName << endl; 

    //Prompt User For their Description

    cout << "Please Describe Yourself: " << endl;
    getline (cin, description);

    cout << "You said the following about yourself: " << description << endl;
    
    

    



}