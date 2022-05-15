/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "functions.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "RightTriangle.h"

int main(void){

    PrintClassHeader(cout);
    
    Shape *myShape;

    myShape = new Circle(5);

    DisplayShapeInfoOnOneLine(myShape);
    DisplayShapeInfoOnNewLine(myShape);

    myShape = NULL;
    myShape = new Rectangle(3, 3);
    
    DisplayShapeInfoOnOneLine(myShape);
    DisplayShapeInfoOnNewLine(myShape);

    myShape = NULL;
    myShape = new Square(10);
    
    DisplayShapeInfoOnOneLine(myShape);
    DisplayShapeInfoOnNewLine(myShape);

    myShape = NULL;
    myShape = new RightTriangle(2, 3, 8);
    
    DisplayShapeInfoOnOneLine(myShape);
    DisplayShapeInfoOnNewLine(myShape);

    return 0;
}