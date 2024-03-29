/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

class Circle : public Shape {
    public:
        Circle();
        Circle(float radius);
        Circle(float radius, string name);
        ~Circle();
        float findArea();
        float findPerimeter();
        void displayShapeInformation();
    
    private:
        float radius;
};

#endif