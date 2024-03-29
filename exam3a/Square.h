/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Square : public Shape {
    public:
        Square();
        Square(float length);
        Square(float length, string name);
        ~Square();
        float findArea();
        float findPerimeter();
        void displayShapeInformation();
    
    private:
        float sideLength;
};

#endif