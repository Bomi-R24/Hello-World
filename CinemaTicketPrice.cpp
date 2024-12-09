#include <iostream>
#include <string>

using namespace std;

int main (){
    int age;
    int ticketPrice;
    string movieType;

    cout << "Please Enter Your Age: ";
    cin >> age;

    cout << "What Type Of Movie Are You Watching? (Regular/3D): ";
    cin >> movieType;

    if (age>=18 && movieType == "Regular") {
        ticketPrice = 800;
    }
    else if (age>=18 && movieType == "3D") {
        ticketPrice = 1000;
    }
    else if (age<=18 && movieType == "Regular") {
        ticketPrice = 300;
    }
    else if (age<=18 && movieType == "3D") {
        ticketPrice = 500;
    }
    else {
        cout << "Invalid Entry" << endl;
        return 1;
    }

cout << "The Price Of Your Movie is: Ksh " << ticketPrice << endl;

return 0;

}