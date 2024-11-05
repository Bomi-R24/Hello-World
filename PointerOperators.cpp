#include <iostream>

using namespace std;


int main() {
    int num1, num2; //Declare two integer variables

//Prompt User Input and Capture Input

cout << "Enter First Number" << endl;
cin >> num1;
cout << "Enter Second Number" << endl;
cin >> num2;

//*****Pointer Operations****** 

//Declare a pointer

int *ptr = nullptr;

//Assign a value to the pointer 

ptr = &num1;
 
 //Output address of num1

 cout << "Address of num1 = "  <<&num1 <<endl;

 //Dereference the pointer to get the value at the memory location

 cout << "Value at memory location pointed by ptr = " << *ptr << endl;

 return 0;

}