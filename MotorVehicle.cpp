#include <iostream>
using namespace std;

int main() {
    int buyingPrice, sellingPrice, profit;

    cout << "Input buying price of the vehicle" << endl;
    cin >> buyingPrice;
    cout << "Input selling price of the vehicle" << endl;
    cin >> sellingPrice;
    profit = sellingPrice - buyingPrice;
    cout << "Your Profit is: " << profit;

    return 0;

}