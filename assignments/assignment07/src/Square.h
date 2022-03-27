/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    07
 * DUE DATE     :    Monday (03/28/22) @ 11:59pm
 **************************************************************/

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <iostream>

/***********************************************************
 * Class Square, derived from abstract class Shape.
 **********************************************************/
class Square : public Shape {
    public:
        Square();
        ~Square();
        float CalculatePerimeter();
        float CalculateArea();
        void setSideLength(float length);
        float getSideLength() const;

    protected:

    private:
        float sideLength;
};

#endif