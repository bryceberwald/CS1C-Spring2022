/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Friday (02/21/22) @ 11:59pm
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
	const int ASSIGNMENT_NUM = 4;
	const char ASSIGNMENT_NAME[60] = "Software Developer";

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
 * Function prints a header for the software developers class
 as needed for information to be displayed neatly to the console.
 **************************************************************/
void PrintSoftwareDeveloperHeader(){
	cout << endl << left << setw(17);
	cout << "Name: " << setw(17) << "Students ID: "
         << setw(17) << "Phone Number: " << setw(8) << "Age: "
         << setw(10) << "Gender: " << setw(18) << "Class Standing: "
         << setw(9) << "GPA: " << setw(22) << "Address: " << setw(15) << "City: " << setw(10) << "State: " << setw(10) << "Zip Code: " << endl;

    cout << right << setfill('-');
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(8) << " ";
    cout << setw(10) << " ";
    cout << setw(18) << " ";
    cout << setw(9) << " ";
    cout << setw(22) << " ";
    cout << setw(15) << " ";
    cout << setw(10) << " ";
    cout << setw(10) << " ";
    cout << left << setfill(' ') << endl;
}

