/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Pre-processor directives
#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototypes
void PrintClassHeader(ostream &output);
void PrintPerimeter(Shape &shape);
void PrintArea(Shape &shape);

#endif