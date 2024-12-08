#include <iostream>
#include <cmath>  // For Pi (Used in Circle Calculation)
using namespace std;

int main (){
    int choice;
    double area, radius, length, base, height, width;

    //Menu

    cout << "Menu:\n";
    cout << "1. Calculate the area of a circle\n";
    cout << "2. Calculate the area of a rectangle\n";
    cout << "3. Calculate the area of a triangle\n";
    cout << "4. Quit\n";
    
    cout << "What Do You Want To Calculate? (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
                // Area of a circle
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius;  // Area = Pi * r^2
                cout << "The area of the circle is: " << area << endl;
                break;
        case 2:
                // Area of a rectangle
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;  // Area = length * width
                cout << "The area of the rectangle is: " << area << endl;
                break;
        case 3:
                // Area of a triangle
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;  // Area = 0.5 * base * height
                cout << "The area of the triangle is: " << area << endl;
                break;
        case 4:
                // Exit the program
                cout << "Exiting the program." << endl;
                break;

        default:
                cout << "Invalid Choice, Try Again (1-4)." << endl;
                break;                            

    }

    return 0;


    
}