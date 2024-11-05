#include <iostream>
#include <string>

using namespace std;

int main () {

string myFirstName, mySecondName, myFullName, myFavouriteMeal, myFavouriteMovie;

//First Name

cout << "Please Enter Your First Name: ";
getline(cin, myFirstName);

cout << "Please Enter Your Second Name: ";
getline(cin, mySecondName);

cout << "Your Name is: " << myFirstName <<" "<<mySecondName << endl;

cout << "What is your favourite meal? ";
getline(cin, myFavouriteMeal);

cout << "Your Favourite Meal is: " << myFavouriteMeal <<endl;

cout << "What is your Favourite Movie? ";
getline(cin, myFavouriteMovie);

cout << "Your Favourite Movie is: " << myFavouriteMovie << endl;

return 0;

}