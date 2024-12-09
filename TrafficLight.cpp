#include <iostream>
using namespace std;

int main() {
    int state = 0;  // 0 for Red, 1 for Green, 2 for Yellow

    // Loop to simulate the traffic light
    while (true) {
        switch (state) {
            case 0:  // Red Light
                cout << "Red Light - STOP" << endl;
                state = 1; // Change to Green after Red
                break;

            case 1:  // Green Light
                cout << "Green Light - GO" << endl;
                state = 2; // Change to Yellow after Green
                break;

            case 2:  // Yellow Light
                cout << "Yellow Light - SLOW DOWN" << endl;
                state = 0; // Change to Red after Yellow
                break;

            default:
                cout << "Invalid state!" << endl;
                return 0;  // Exit the program in case of an error
        }

        // Wait for a while before changing the light (using a simple loop to pause)
        for (int i = 0; i < 100000000; i++) {}  // This is just a basic delay loop
    }

    return 0;
}
