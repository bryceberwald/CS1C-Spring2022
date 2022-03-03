/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Square.h"
#include "Triangle.h"

int main() {
    // Call function to display class header to the console.
    PrintClassHeader(cout);

    Square Square;
    Triangle Triangle;
    float sideLength = 0.0;

    cout << "\nPlease enter the side length for a \"Square\": ";
    cin >> sideLength;
    Square.setSideLength(sideLength);

    // Print Area & Perimeter for the SQUARE.
    PrintPerimeter(Square);
    PrintArea(Square);

    for(int i = 1; i < 4; i++){
        cout << "\nPlease enter side length #" << i << " for a \"Triangle\": ";
        cin >> sideLength;
        Triangle.setSideLength(i, sideLength);
    }

    // Print Area & Perimeter for the TRIANGLE.
    PrintPerimeter(Triangle);
    PrintArea(Triangle);


    return 0;
}