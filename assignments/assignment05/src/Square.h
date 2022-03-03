/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

/***********************************************************
 * 
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