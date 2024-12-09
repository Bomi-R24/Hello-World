#include <iostream>
#include <string>

using namespace std;

int main (){
    int initialAmount;
    double afterDiscount;

    cout << "What is your total bill?: ";
    cin >> initialAmount;

    if (initialAmount >= 1000) {
        afterDiscount = initialAmount * 0.80;  // 20% discount for purchases over Ksh 1000
        cout << "You received a 20% discount!" << endl;
    } else if (initialAmount >= 500) {
        afterDiscount = initialAmount * 0.90;  // 10% discount for purchases over Ksh 500
        cout << "You received a 10% discount!" << endl;
    } else {
        initialAmount = afterDiscount;  // No discount for purchases under Ksh 500
        cout << "No discount applied." << endl;
    }

    // Amount after discount has been applied

    cout << "The total amount after discount is: Ksh " << afterDiscount << endl;

    return 0;



}