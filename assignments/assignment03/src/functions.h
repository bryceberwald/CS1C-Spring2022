/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    03
 * DUE DATE     :    Monday (02/14/22) @ 11:59pm
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

// A created namespace to hold all variables.
namespace DataHolding {

    // Constant declarations
    const float TAX_RATE = 0.0775;

    // Struct created for the purchased items.
    struct PurchaseItem {
        string name;
        float cost;
        int quantity;
    };

    // Struct created for items to be held in a linked list.
    struct Items {
        string name;
        float cost;
        int quantity;
        Items *next;
    };

};

// Function Prototypes
void PrintClassHeader(ostream &output);

#endif