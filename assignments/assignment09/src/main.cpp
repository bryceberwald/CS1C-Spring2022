/*************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    09
 * DUE DATE     :    Friday (04/22/22) @ 11:59pm
 *************************************************************/

#include <stdlib.h>
#include <iomanip>
#include "Sort.h"

// Function prototype for printing the class header to the console.
void PrintClassHeader(ostream &output);

int main(){

    PrintClassHeader(cout);

    srand(time(NULL));

    const int MAX_SIZE = 100;

    int array1[MAX_SIZE];
	int array2[MAX_SIZE];
	int array3[MAX_SIZE];

    // Initailize array values.
	for (int i = 0; i < MAX_SIZE; i++){
		array1[i] = i + 1;
		array2[i] = MAX_SIZE - i;
        array3[i] = rand() % 100 + 1;
	}

    // MERGE SORTING BELOW...

    cout << "\nMERGE SORTING!!!\n";
    cout << "\nARRAY #1:\n";
    PrintArray(array1, MAX_SIZE);
    MergeSort(0, MAX_SIZE, array1, true);
    PrintArray(array1, MAX_SIZE);

    cout << "\nARRAY #2:\n";
    PrintArray(array2, MAX_SIZE);
    MergeSort(0, MAX_SIZE, array2, true);
    PrintArray(array2, MAX_SIZE);

    cout << "\nARRAY #3:\n";
    PrintArray(array3, MAX_SIZE);
    MergeSort(0, MAX_SIZE, array3, true);
    PrintArray(array3, MAX_SIZE);

    // Initailize array values.
    for (int i = 0; i < MAX_SIZE; i++){
		array1[i] = i + 1;
		array2[i] = MAX_SIZE - i;
        array3[i] = rand() % 100 + 1;
	}

    // QUICK SORTING BELOW...

    cout << "\nQUICK SORTING!!!\n";
    cout << "\nARRAY #1:\n";
    PrintArray(array1, MAX_SIZE);
    QuickSort(0, MAX_SIZE, array1, true);
    PrintArray(array1, MAX_SIZE);

    cout << "\nARRAY #2:\n";
    PrintArray(array2, MAX_SIZE);
    QuickSort(0, MAX_SIZE, array2, true);
    PrintArray(array2, MAX_SIZE);

    cout << "\nARRAY #3:\n";
    PrintArray(array3, MAX_SIZE);
    QuickSort(0, MAX_SIZE, array3, true);
    PrintArray(array3, MAX_SIZE);

    return 0;
}


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
	const int ASSIGNMENT_NUM = 9;
	const char ASSIGNMENT_NAME[20] = "Sorting";

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

