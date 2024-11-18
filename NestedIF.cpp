#include <iostream>
using namespace std;

int main() {
    //Declare Necessary Variables
    int age;
    string childName, interest1, interest2;

    // Prompt User for Childs Name
    cout << "Please Enter The Child's Full Name: ";
    getline (cin, childName);

    cout << "Please Enter The Child's Age: ";
    cin >> age;

    if (age>=4 && age <=10) 
    {
        cout << "Please Enter The Child's First Interest: ";
        cin >> interest1;
        if(interest1=="soccer") //First Nested If
        {
            cout << childName << " has been admitted to the soccer play group." << endl;
        }
        if (interest2=="art") //Second Nested If
        {
            cout << childName << " has been admitted to the art play group." << endl;
        }
        else
        {
            cout << childName << " has been admitted to other groups." << endl;
        }
    }
        else 
        {
        cout << "Admission Unsuccesful." << childName << "'s age is invalid" << endl;
        }

return 0;

}