#include <iostream>
using namespace std;

int main() {
    double myNum = 15.5; //Initialize and double variable
    int myNewNum = int(myNum); /*create a new integer variable and explicitly cast the double to int*/
    cout << myNewNum <<endl; //output the new integer variable

    int myNewNum2 = (int)myNum; //Another Way To Do It
    cout << myNewNum2;
    
    return 0;




}