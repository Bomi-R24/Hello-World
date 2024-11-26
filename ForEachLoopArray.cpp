#include <iostream>
using namespace std;

int main() {
    int nums[5]; //Array Declaration
    
    //Input loop
    cout << "Please enter the 5 integers: ";
    
        for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    
    //Output Loop
    cout << "The 5 integers entered are: " << endl;
    for (int i: nums) {
        cout << i << endl;
    }

    return 0;
}
