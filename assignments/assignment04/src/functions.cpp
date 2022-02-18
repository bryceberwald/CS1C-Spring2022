/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
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
	const int ASSIGNMENT_NUM = 2;
	const char ASSIGNMENT_NAME[60] = "Inheritance";

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
 * Function will print the header for Student object to be
 displayed followed by the header as needed.
 **************************************************************/
void PrintStudentObjectHeader() {

	cout << endl << left << setw(17);
	cout << "Name: " << setw(17) << "Students ID: "
         << setw(17) << "Phone Number: " << setw(8) << "Age: "
         << setw(10) << "Gender: " << setw(18) << "Class Standing: "
         << setw(7) << "GPA: " << endl;

    cout << right << setfill('-');
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(8) << " ";
    cout << setw(10) << " ";
    cout << setw(18) << " ";
    cout << setw(7) << " ";
    cout << left << setfill(' ') << endl;

}


/* ************************************************************
 * Function will print the header for CS1Cstudent object to be
 displayed followed by the header as needed.
 **************************************************************/
void PrintCS1CStudentObjectHeader() {
	
	cout << endl << left << setw(17);
	cout << "Name: " << setw(17) << "Students ID: "
         << setw(17) << "Phone Number: " << setw(8) << "Age: "
         << setw(10) << "Gender: " << setw(18) << "Class Standing: "
         << setw(7) << "GPA: " << setw(20) << "Total Score" 
         << setw(20) << "Python Kknowledge" << setw(20) << "Graduation Date" << endl;

    cout << right << setfill('-');
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(8) << " ";
    cout << setw(10) << " ";
    cout << setw(18) << " ";
    cout << setw(7) << " ";
    cout << setw(20) << " ";
    cout << setw(20) << " ";
    cout << setw(20) << " ";
    cout << left << setfill(' ') << endl;
	
}

