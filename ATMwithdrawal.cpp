#include <iostream>

using namespace std;

int main(){
    int bankBalance = 500000;
    int withdrawalAmount;
    int dailyLimit = 100000;

    cout << "Hello, your bank balance is: " << bankBalance << endl;

    cout << "How Much Would You Like To Withdraw?: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount>bankBalance) {
        cout << "Sorry You Have Insufficient Funds";
    }
    if (withdrawalAmount>=dailyLimit) {
        cout << "Sorry You Have Exceeded The Daily Withdrawal Limit, Try Again Tomorrow.";
    }
    else {
        cout << "Withdrawal Successful" << endl;
        return 1;
    }
return 0;
}