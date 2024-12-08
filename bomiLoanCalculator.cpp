#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    // Get input from the user
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your bank balance: ";
    cin >> bankBalance;

    cout << "Enter your CRB status (Good/Bad): ";
    cin >> crbStatus;

    cout << "Enter the number of months you've been a customer: ";
    cin >> monthsAsCustomer;

    //Check qualification for loan

    if (age>22 && bankBalance>50000 && crbStatus =="Good" && monthsAsCustomer>6) 
    {
        cout << "Congratulations! you qualify for a loan." << endl;
    }
    else 
    {
        cout << "Sorry you do not qualify for a loan" << endl;
    }

    return 0;
}