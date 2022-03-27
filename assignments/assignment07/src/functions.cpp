/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    07
 * DUE DATE     :    Monday (03/28/22) @ 11:59pm
 **************************************************************/

#include "functions.h"

/* ************************************************************
 * This function will display the class header to the console
 * as needed. One variable is passed by reference for the header
 * to be displayed in the console or a file.
 **************************************************************/
void PrintClassHeader(ostream &output) {

	// Declared variables for the program header to be used by this function.
	const char PROGRAMMER[20] = "Bryce Berwald";
	const char CLASS[5] = "CS1C";
	const char SECTION[25] = "MW: 7:30PM-9:50PM";
	const int ASSIGNMENT_NUM = 7;
	const char ASSIGNMENT_NAME[20] = "Exceptions";

	// Output the program header to output specified.
	output << left;
	output << "*******************************************************";
	output << "\n* PROGRAMMED BY : " << PROGRAMMER;
	output << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	output << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	output << "\n* ASSIGNMENT #" << setw(2) << ASSIGNMENT_NUM << ": " << ASSIGNMENT_NAME;
	output << "\n*******************************************************" << endl;
	output << right;

}


/* ************************************************************
 * This functionn will will print the perimeter of the shape 
 * object being passed by reference. Shape is an abstract class,
 * and the object is never defined, so the object is getting
 * passed by reference.
 **************************************************************/
void PrintPerimeter(Shape &shape){
	cout << "Perimeter is " << shape.CalculatePerimeter() << endl;
}


/* ************************************************************
 * This function will print the area of the shape object being
 * passed by reference. Shape is an abstract class, which the
 * object is never initiated, so the shape object must be
 * passed by reference.
 **************************************************************/
void PrintArea(Shape &shape){
	cout << "Area is " << shape.CalculateArea() << endl;
}

