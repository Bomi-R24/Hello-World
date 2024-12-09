#include <iostream>
#include <string>

using namespace std;

int main (){
    int daysLate, fine;
    string bookType;

//User Input
    
    cout << "How many days is the book late?: ";
    cin >> daysLate;

    cout << "What type of book is it? (Regular, Childrens, Reference): ";
    cin >> bookType;

    //Fine Calculation

    if (bookType == "Regular") {
        fine = daysLate * 50; // Ksh 50 per late day
    }
    else if (bookType == "Childrens") {
        fine = daysLate * 30; // Ksh 30 per late day
    }
    else if (bookType == "Reference") {
        fine = daysLate * 10; // Ksh 10 per late day
    }
    else {
        cout << "Invalid Choice" << endl;
        return 1; //Close Progam If Book Type Is Invalid
    }

    // Output Fine
    cout << "Your Fine Amount is: Ksh " << fine << endl;

    return 0;    


}