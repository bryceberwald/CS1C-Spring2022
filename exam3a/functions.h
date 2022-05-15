/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef functions_h
#define functions_h

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include "Shape.h"
using namespace std;

// Function Prototypes
void PrintClassHeader(ostream &output);
void DisplayShapeInfoOnOneLine(Shape* shape);
void DisplayShapeInfoOnNewLine(Shape* shape);

#endif /* functions_h */
