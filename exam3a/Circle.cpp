/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "Circle.h"

Circle::Circle(){
    this->radius = 0.0;
    this->setName("Circle");
}


Circle::Circle(float radius){
    this->radius = radius;
    this->setName("Circle");
}


Circle::Circle(float radius, string name){
    this->radius = radius;
    this->setName(name);
}


Circle::~Circle(){

}


float Circle::findArea(){
    return M_PI * (radius * radius);
}


float Circle::findPerimeter(){
    return 2.0 * M_PI * radius;
}


void Circle::displayShapeInformation(){
    cout << endl << "Shape: " << this->getName() << endl;
    cout << "Area: " << this->findArea() << endl;
    cout << "Perimeter: " << this->findPerimeter() << endl;
}

