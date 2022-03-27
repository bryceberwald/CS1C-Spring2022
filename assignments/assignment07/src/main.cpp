/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    07
 * DUE DATE     :    Monday (03/28/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Square.h"
#include "Triangle.h"

int main(void) {
    // Call function to display class header to the console.
    PrintClassHeader(cout);

    float currentSideLength = 0.0;      // Variable used/reused for the demonstration of this assignment.

    Square SquareObject;                // Create an instance of the Square class.
    //SquareObject.setSideLength(172);    // Set the side length of a Square to be > 100 to FAIL the assert macro test.

    // Call function to get length of the Square object to be returned into currentSideLength.
    //currentSideLength = SquareObject.getSideLength();

    //assert(currentSideLength < 100);    // Assume that currentSideLength is less than zero. (FAIL TEST)

    SquareObject.setSideLength(77);     // Set the side length of a Square to be < 100 to PASS the assert macro test.

    // Call function to get length of the Square object to be returned into currentSideLength.
    currentSideLength = SquareObject.getSideLength();

    assert(currentSideLength < 100);    // Assume that currentSideLength is less than zero. (PASSED TEST)

    // Call function to set side length. (FAILS!!! WILL THROW AN EXCEPTION)
    SquareObject.setSideLength(-3.0);

    // Call function to set side length. (PASSES!!! WILL NOT THROW AN EXCEPTION)
    SquareObject.setSideLength(23.0);

    return 0;
}