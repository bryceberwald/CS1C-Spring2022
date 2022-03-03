/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "functions.h"

int main() {
    // Call function to display class header to the console.
    PrintClassHeader(cout);

    bool inSession = true;

    while(inSession) {
        //Print menu options to the console for the user.
		cout << "\nMENU OPTIONS" << endl << endl;
		cout << "---------------------------------------" << endl;
		cout << "Type \"1\" to Set Triangle Side Lengths (3 sides)." << endl;
		cout << "Type \"2\" to Set Square Side Length (1 side)." << endl;
		cout << "Type \"3\" to Print the Area of the Triangle." << endl;
		cout << "Type \"4\" to Print the Perimeter of the Triangle." << endl;
        cout << "Type \"5\" to Print the Area of the Square." << endl;
        cout << "Type \"6\" to Print the Perimeter of the Square." << endl;
		cout << "---------------------------------------" << endl;
		cout << "Please enter an option 1-6 (0 to exit): ";
    }

    return 0;
}