#include <iostream>
using namespace std;
//Define the external variable
int globalVar = 100;
int main() {
    //Access the external variable
    cout << "On other.cpp, globalVar: " << globalVar << endl;
    return 0;
}