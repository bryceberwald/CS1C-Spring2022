/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "functions.h"

/* ************************************************************
 * 
 **************************************************************/
void PrintClassHeader(ostream &output) {

	// Declared variables for the program header to be used by this function.
	const char PROGRAMMER[20] = "Bryce Berwald";
	const char CLASS[5] = "CS1C";
	const char SECTION[25] = "MW: 7:30PM-9:50PM";
	const int ASSIGNMENT_NUM = 5;
	const char ASSIGNMENT_NAME[60] = "Abstract Classes";

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
 * 
 **************************************************************/
void PrintPerimeter(Shape shape){

}


/* ************************************************************
 * 
 **************************************************************/
void PrintArea(Shape shape){

}

