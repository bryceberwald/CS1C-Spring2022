/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Square.h"
#include "Triangle.h"

int main(int argc, char** argv) {
    // Call function to display class header to the console.
    PrintClassHeader(cout);

    Square Square;
    Triangle Triangle;
    float sideLength = 0.0;

    cout << "\nPlease enter the side length for a \"Square\": ";
    cin >> sideLength;
    Square.setSideLength(sideLength);

    // Print Area & Perimeter for the SQUARE.
    cout << endl;
    PrintPerimeter(Square);
    PrintArea(Square);
    cout << endl;

    for(int i = 1; i < 4; i++){
        cout << "Please enter side length #" << i << " for a \"Triangle\": ";
        cin >> sideLength;
        Triangle.setSideLength(i, sideLength);
    }

    // Print Area & Perimeter for the TRIANGLE.
    cout << endl;
    PrintPerimeter(Triangle);
    PrintArea(Triangle);

    // Assignment Part B - Using Command Line Parameters!!!
    for(int i = 0; i < argc; i++){
        if(i == 0){
            cout << "\nExecutable Name: " << argv[i];
        } else if(i == 1){
            cout << "\nMy First Name is: " << argv[i];
        } else if(i == 2){
            cout << "\nMy Last Name is: " << argv[i];
        }
    }
    cout << endl;

    char* firstName;
    char* lastName;

    firstName = argv[1];
    lastName = argv[2];

    cout << "The 3rd letter in my first name is... " << firstName[2] << endl;
    cout << "The 3rd letter in my last name is... " << lastName[2] << endl;

    return 0;
}