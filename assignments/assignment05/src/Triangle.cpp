/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Tuesday (03/08/22) @ 11:59pm
 **************************************************************/

#include "Triangle.h"

/***********************************************************
 * 
 **********************************************************/
Triangle::Triangle(){
    this->sideOne = 0.0;
    this->sideTwo = 0.0;
    this->sideThree = 0.0;
}


/***********************************************************
 * 
 **********************************************************/
Triangle::~Triangle(){

}


/***********************************************************
 * 
 **********************************************************/
float Triangle::CalculatePerimeter(){
    return (sideOne + sideTwo + sideThree);
}


/***********************************************************
 * 
 **********************************************************/
float Triangle::CalculateArea(){
    float semiPerimeter = (this->sideOne + this->sideTwo + this->sideThree) / 2;
    float area = pow(semiPerimeter*(semiPerimeter-sideOne)*(semiPerimeter-sideTwo)*(semiPerimeter-sideThree), .5);

    return area;
}


/***********************************************************
 * 
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
 * 
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

