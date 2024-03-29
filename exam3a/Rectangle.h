/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Rectangle : public Shape {
    public:
        Rectangle();
        Rectangle(float length, float width);
        Rectangle(float length, float width, string name);
        ~Rectangle();
        float findArea();
        float findPerimeter();
        void displayShapeInformation();
    
    private:
        float length;
        float width;
};

#endif