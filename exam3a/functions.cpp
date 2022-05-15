/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "functions.h"

/***********************************************************
 * Function prints the class header to the console as needed.
 ***********************************************************/
void PrintClassHeader(ostream &output) {

	// Declared variables for the program header to be used by this function.
	const char PROGRAMMER[20] = "Bryce Berwald";
	const char CLASS[5] = "CS1C";
	const char SECTION[25] = "MW: 7:30PM-10:50PM";
	const char EXAM_NUM[3] = "3a";
	const char ASSIGNMENT_NAME[25] = "Shape Program";

	// Output the program header to output specified.
	output << left;
	output << "*******************************************************";
	output << "\n* PROGRAMMED BY : " << PROGRAMMER;
	output << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	output << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	output << "\n* EXAM #" << setw(8) << EXAM_NUM << ": " << ASSIGNMENT_NAME;
	output << "\n*******************************************************" << endl;
	output << right;

}


/*********************************************************
 * 
 *********************************************************/
void DisplayShapeInfoOnOneLine(Shape* shape){
	cout << endl;
	cout << "Name = " << shape->getName();
	cout << ", Area = " << shape->findArea();
	cout << ", Perimeter = " << shape->findPerimeter();
	cout << endl;
}


/*********************************************************
 * 
 *********************************************************/
void DisplayShapeInfoOnNewLine(Shape* shape){
	cout << endl << "Shape: " << shape->getName() << endl;
    cout << "Area: " << shape->findArea() << endl;
    cout << "Perimeter: " << shape->findPerimeter() << endl;
}

