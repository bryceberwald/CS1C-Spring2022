/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

class RightTriangle : public Shape {
    public:
        RightTriangle();
        RightTriangle(float opp, float adj, float hyp);
        RightTriangle(float opp, float adj, float hyp, string name);
        ~RightTriangle();
        float findArea();
        float findPerimeter();
        void displayShapeInformation();
    
    private:
        float opposite;
        float adjacent;
        float hypotenuse;
};

#endif