#include <iostream>
using namespace std;

int main () {
    int option; //Switch Variable
    cout << "Hi. This is your BBIT Semester 1 Timetable (May-Aug 2024)" << endl;
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday" << endl;
    cout << "\nPlease select day of choice (e.g 1,2,3,4,5)" << endl;
    cin >> option;
    
    switch (option) {

    case 1:
    cout << "Monday Classes:" << endl;
    cout << "\t1.BBIT 1106: Maths for Business" << endl; 
    cout << "\t2.BBIT 1102: Intro to Programming" << endl;
    break; 

    case 2:
    cout << "Tuesday Classes:" << endl;
    cout << "\t1. BBIT 1102: Intro to Programming" << endl;
    cout << "\t2. BBIT 1104: Ethics" << endl;
    break;

    case 3:
    cout << "Wednesday Classes:" << endl;
    cout << "\t1. BBIT 1106: Maths for Business" << endl;
    cout << "\t2. BBIT 1104: Theology" << endl;
    cout << "\t3. BBIT 1101: Fundamentals of IT" << endl;
    break;

    case 4:
    cout << "Thursday Classes:" << endl;
    cout << "\t1. BBIT 1105: Accounting" << endl;
    cout << "\t2. BBIT 1101: Fundamentals of IT" << endl;
    break;

    case 5:
    cout << "Friday Classes:" << endl;
    cout << "\t1. BBIT 1103: Business Computing" << endl;
    break;

    default:
    cout << "Invalid Input" << endl;
}

return 0;
}