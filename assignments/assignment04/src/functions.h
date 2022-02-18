/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
 **************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <ostream>
#include <sstream>
#include <fstream>

using namespace std;

// Constant declarations
const int STUDENTS_MAX_ARRAY_SIZE = 4;
const int CS1C_STUDENTS_MAX_ARRAY_SIZE = 3;

// Function Prototypes
void PrintClassHeader(ostream &output);
void PrintStudentObjectHeader();
void PrintCS1CStudentObjectHeader();

#endif