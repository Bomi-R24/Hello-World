#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string courseName;
    int score;

    // Ask for student name, course and score
    cout << "Please Enter Your Full Name: ";
    getline(cin, fullName);  // Using getline to allow spaces in the full name

    cout << "Please Enter Your Course: ";
    getline(cin, courseName);

    cout << "Enter your score: ";
    cin >> score;

    switch (score/10) {
        case 10: // 100
        case 9: //90-99
        case 8: //80-89
        
        case 7: //70-79
        cout << fullName << " your " << courseName << " grade is: A " << endl;
        break;
        
        case 6: //60-69
        cout << fullName << " your " << courseName << " grade is: B " << endl;
        break;

        case 5: //50-59
        cout << fullName << " your " << courseName << " grade is: C " << endl;
        break;
        
        case 4: //40-49
        cout << fullName << " your " << courseName << " grade is: D " << endl;
        break;

        case 3: //30-39
        case 2: //20-29
        case 1: //10-19
        case 0: //0-9
        if (score >=0 && score <40)
        cout << fullName << " your " << courseName << " grade is: F " << endl;
        else 
        cout << fullName << " your " << courseName << " grade is: Invalid " << endl;
        break;

        default:
        cout << "You've Entered an Invalid Score" << endl;
        break;

    }

    return 0;
    
}