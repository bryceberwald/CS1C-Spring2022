/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * EXAM #       :    3a
 * DUE DATE     :    Monday (05/15/22) @ 07:30pm
 **************************************************************/

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
    public:
        Shape();
        ~Shape();
        virtual float findPerimeter() = 0;
        virtual float findArea() = 0;
        virtual void displayShapeInformation() = 0;
        string getName() const;

    protected:
        void setName(string newName);

    private:
        string name;

};

#endif