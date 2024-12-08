#include <iostream>
#include <string>

using namespace std;

string Grade(int score) {
    if (score >= 70) {
        return "A";
    } else if (score >= 60) {
        return "B";
    } else if (score >= 50) {
        return "C";
    } else if (score >= 40) {
        return "D";
    } else if (score >= 0) {
        return "F";
    } else {
        return "Invalid Score";
    }
}

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

    // Determine and print the grade based on the score
    string grade = Grade(score);

    // Output the result
    if (grade == "Invalid Score") {
        cout << "Invalid Score" << endl;
    } else {
        cout << fullName << " your " << courseName << " grade is: " << grade << endl;
    }

    return 0;
}