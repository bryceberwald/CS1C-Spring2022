/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "Rectangle.h"

Rectangle::Rectangle(){
    this->length = 0.0;
    this->width = 0.0;
    this->setName("Rectangle");
}


Rectangle::Rectangle(float length, float width){
    this->length = length;
    this->width = width;
    this->setName("Rectangle");
}


Rectangle::Rectangle(float length, float width, string name){
    this->length = length;
    this->width = width;
    this->setName(name);
}


Rectangle::~Rectangle(){

}


float Rectangle::findArea(){
    return this->length * this->width;
}


float Rectangle::findPerimeter(){
    return 2 * (this->length + this->width);
}


void Rectangle::displayShapeInformation(){
    cout << endl << "Shape: " << this->getName() << endl;
    cout << "Area: " << this->findArea() << endl;
    cout << "Perimeter: " << this->findPerimeter() << endl;
}

