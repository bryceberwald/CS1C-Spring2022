/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "Triangle.h"

/***********************************************************
 * This is the constructor method for the class named
 * Triangle, and the three variables associated with the
 * class are initialized to a value of zero.
 **********************************************************/
Triangle::Triangle(){
    this->sideOne = 0.0;
    this->sideTwo = 0.0;
    this->sideThree = 0.0;
}


/***********************************************************
 * This is the destructor method for the class named
 * Triangle.
 **********************************************************/
Triangle::~Triangle(){

}


/***********************************************************
 * This is the method for calculating the perimeter of a
 * triangle using the three private variables associated
 * with the triangle class. The perimeter will be returned
 * as a floating point value.
 **********************************************************/
float Triangle::CalculatePerimeter(){
    return (sideOne + sideTwo + sideThree);
}


/***********************************************************
 * This is the method for calculating the area of a triangle
 * with the three variables stored in the private portion of
 * the class named Triangle. The area will be returned as
 * a floating point value after calculations have been 
 * performed.
 **********************************************************/
float Triangle::CalculateArea(){
    float semiPerimeter = (this->sideOne + this->sideTwo + this->sideThree) / 2;
    float area = pow(semiPerimeter*(semiPerimeter-sideOne)*(semiPerimeter-sideTwo)*(semiPerimeter-sideThree), .5);

    return area;
}


/***********************************************************
 * This is the method for setting the side lengths of a 
 * triangle. The method uses two parameters to distingiush
 * between what side is to be assigned the length value being
 * passed at the time. No value is returned and this is a 
 * mutator method.
 **********************************************************/
void Triangle::setSideLength(int side, float length){
    switch(side){
        case 1:
            // Code for setting side length #1.
            this->sideOne = length;
            break;
        case 2:
            // Code for setting side length #2.
            this->sideTwo = length;
            break;
        case 3:
            // Code for setting side length #3.
            this->sideThree = length;
            break;
        default:
            // Error checking!
            cout << "\nOut of Bounds...\n";
            break;
    }
}


/***********************************************************
 * This is the method for getting the side length of a 
 * traingle. One parameter is passed to the function to
 * help the method determine which side length of the three
 * lengths total is to be returned. The side length will be
 * returned as a floating point value.
 **********************************************************/
float Triangle::getSideLength(int side) const {
    switch(side){
        case 1:
            // Code for returning side length #1.
            return this->sideOne;
            break;
        case 2:
            // Code for returning side length #2.
            return this->sideTwo;
            break;
        case 3:
            // Code for returning side length #3.
            return this->sideThree;
            break;
        default:
            // Error checking!
            return -1;
            break;
    }
}

