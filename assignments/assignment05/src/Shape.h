/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#ifndef SHAPE_H
#define SHAPE_H

/***********************************************************
 * Abstract Class named Shape
 **********************************************************/
class Shape {
    public:
        Shape();
        ~Shape();
        virtual float CalculatePerimeter() = 0;
        virtual float CalculateArea() = 0;

    protected:

    private:

};

#endif