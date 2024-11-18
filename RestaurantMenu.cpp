#include <iostream>
#include <string>

using namespace std;

int main () {
    int foodChoice;
    double totalCost = 0;

    //Restaurant Menu

    cout << "Welcome to Russo's\n";
    cout << "Please select your food combo from the menu below:\n";
    cout << "1. Burger Combo - Kes 1200\n";
    cout << "2. Pizza Combo - Kes 1500\n";
    cout << "3. Chicken Combo - Kes 800\n";
    cout << "4. Salad Combo - Kes 250\n";
    cout << "5. Soda - Kes 100\n";
    cout << "6. Exit\n";

    //Prompt user for choice
    cout << "\nPlease enter the number corresponding to your order: ";
    cin >> foodChoice;

    //Use switch-case to get total cost of user's order
    switch (foodChoice) {
        case 1:
        cout << "\nBurger Combo\n";
        totalCost += 1200;
        break;

        case 2:
        cout << "\nPizza Combo\n";
        totalCost += 1500;
        break;

        case 3:
        cout << "\nChicken Combo\n";
        totalCost += 800;
        break;

        case 4:
        cout << "\nSalad Combo\n";
        totalCost += 250;
        break;

        case 5:
        cout << "\nSoda\n";
        totalCost += 100;
        break;

        case 6:
        cout << "\nThanks for visiting! Goodbye.\n";
        return 0; //Exits the program if user selects Exit

        default:
        cout << "\n Invalid Choice! Please select a valid option from the menu.\n";
        return 1; // Exit with an error code if invalid choice
    }
    // Display the total cost
    cout << "\nTotal Bill: Kes " << totalCost << endl;

    return 0;
}