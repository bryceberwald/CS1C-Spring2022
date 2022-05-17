/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#include "Shape.h"

Shape::Shape(){
    this->name = "";
}


Shape::~Shape(){

}


void Shape::setName(string newName){
    this->name = newName;
}


string Shape::getName() const{
    return this->name;
}

