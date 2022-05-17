/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "RightTriangle.h"

RightTriangle::RightTriangle(){
    this->opposite = 0.0;
    this->adjacent = 0.0;
    this->hypotenuse = 0.0;
    this->setName("Right Triangle");
}


RightTriangle::RightTriangle(float opp, float adj, float hyp){
    this->opposite = opp;
    this->adjacent = adj;
    this->hypotenuse = hyp;
    this->setName("Right Triangle");
}


RightTriangle::RightTriangle(float opp, float adj, float hyp, string name){
    this->opposite = opp;
    this->adjacent = adj;
    this->hypotenuse = hyp;
    this->setName(name);
}


RightTriangle::~RightTriangle(){

}


float RightTriangle::findArea(){
    return (this->opposite * this->adjacent) / 2.0;
}


float RightTriangle::findPerimeter(){
    return this->opposite + this->adjacent + sqrt(pow(this->opposite, 2) + pow(this->adjacent, 2));
}


void RightTriangle::displayShapeInformation(){
    cout << endl << "Shape: " << this->getName() << endl;
    cout << "Area: " << this->findArea() << endl;
    cout << "Perimeter: " << this->findPerimeter() << endl;
}

