/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "Square.h"

/***********************************************************
 * This is the constructor method for the class named
 * Square. The one variable gets initiated to a value of
 * zero.
 **********************************************************/
Square::Square(){
    this->sideLength = 0.0;
}


/***********************************************************
 * This is the destructor method for the class named
 * Square.
 **********************************************************/
Square::~Square(){

}


/***********************************************************
 * This is the method to calculate the perimeter with the
 * one private attribute associated with the class named
 * Square. The value is of type float and will be returned
 * as the same value type.
 **********************************************************/
float Square::CalculatePerimeter(){
    return (4 * sideLength);
}


/***********************************************************
 * This is the method to calculate the area with the one
 * private attribute associated within the class named
 * Square. The value is of type float and will be returned
 * as the same.
 **********************************************************/
float Square::CalculateArea(){
    return (sideLength * sideLength);
}


/***********************************************************
 * This is the method for setting the one variable with
 * class named Square. This is a mutator method and does not
 * return any value.
 **********************************************************/
void Square::setSideLength(float length){
    this->sideLength = length;
}


/***********************************************************
 * This is the method for getting the value of the side
 * length stored with the class named Square as a private
 * variable. The value is of type float and will be returned
 * as the same value type.
 **********************************************************/
float Square::getSideLength() const {
    return this->sideLength;
}

