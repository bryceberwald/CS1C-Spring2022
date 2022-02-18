/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    01
 * DUE DATE     :    Sunday (01/23/21) @ 11:59pm
 **************************************************************/

#include "functions.h"

/* ************************************************************
 * Function prints the class header to the console as needed.
 **************************************************************/
void PrintClassHeader(ostream &output) {

	// Declared variables for the program header to be used by this function.
	const char PROGRAMMER[20] = "Bryce Berwald";
	const char CLASS[5] = "CS1C";
	const char SECTION[25] = "MW: 7:30PM-10:50PM";
	const int ASSIGNMENT_NUM = 1;
	const char ASSIGNMENT_NAME[60] = "Deck of Cards";

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
