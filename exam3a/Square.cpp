/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "Square.h"

Square::Square(){
    this->sideLength = 0.0;
    this->setName("Square");
}


Square::Square(float length){
    this->sideLength = length;
    this->setName("Square");
}


Square::Square(float length, string name){
    this->sideLength = length;
    this->setName(name);
}


Square::~Square(){

}


float Square::findArea(){
    return sideLength * sideLength;
}


float Square::findPerimeter(){
    return 4.0 * sideLength;
}


void Square::displayShapeInformation(){
    cout << endl << "Shape: " << this->getName() << endl;
    cout << "Area: " << this->findArea() << endl;
    cout << "Perimeter: " << this->findPerimeter() << endl;
}

