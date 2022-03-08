/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

/***********************************************************
 * Class Triangle, derived from abstract class Shape.
 **********************************************************/
class Triangle : public Shape {
    public:
        Triangle();
        ~Triangle();
        float CalculatePerimeter();
        float CalculateArea();
        void setSideLength(int side, float length);
        float getSideLength(int side) const;

    protected:

    private:
        float sideOne;
        float sideTwo;
        float sideThree;

};

#endif