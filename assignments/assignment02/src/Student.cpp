/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
 **************************************************************/

#include "Student.h"

/******************************************************
* Default Constructor method for Student class.
*******************************************************/
Student::Student(){

    studentsName = "";
    studentsID = 0;
    studentsPhoneNumber = "000-000-0000";
    studentsAge = 0;
    studentsGender = "";
    studentsClassStanding = "";
    studentsGPA = 0.0;

}


/******************************************************
* Non-default Constructor method for Student class.
*******************************************************/
Student::Student(string name, int id, 
                 string phoneNumber, int age, string gender, 
                 string classStanding, float gpa) {

    studentsName = name;
    studentsID = id;
    studentsPhoneNumber = phoneNumber;
    studentsAge = age;
    studentsGender = gender;
    studentsClassStanding = classStanding;
    studentsGPA = gpa;

}


/******************************************************
* Destructor method for Student class.
*******************************************************/
Student::~Student(){

}


/******************************************************
* Mutator method for Student class to change the
* students name as needed.
*******************************************************/
void Student::setStudentsName(string name){
    studentsName = name;
}


/******************************************************
* Mutator method for Student class to change the
* students ID as needed.
*******************************************************/
void Student::setStudentsID(int id){
    studentsID = id;
}


/******************************************************
* Mutator method for Student class to change the
* students phone number as needed.
*******************************************************/
void Student::setStudentsPhoneNumber(string phoneNumber){
    studentsPhoneNumber = phoneNumber;
}

/******************************************************
* Mutator method for Student class to change the
* students age as needed.
*******************************************************/
void Student::setStudentsAge(int age) {
    studentsAge = age;
}


/******************************************************
* Mutator method for Student class to change the
* students gender as needed.
*******************************************************/
void Student::setStudentsGender(string gender){
    studentsGender = gender;
}


/******************************************************
* Mutator method for Student class to change the
* students class standing as needed.
*******************************************************/
void Student::setStudentsClassStanding(string classStanding){
    studentsClassStanding = classStanding;
}


/******************************************************
* Mutator method for Student class to change the
* students GPA as needed.
*******************************************************/
void Student::setStudentsGPA(float gpa){
    studentsGPA = gpa;
}


/******************************************************
* Accessor method for Student class to return the
* students name as needed.
*******************************************************/
string Student::getStudentsName() const{
    return studentsName;
}


/******************************************************
* Accessor method for Student class to return the
* students ID as needed.
*******************************************************/
int Student::getStudentsID() const{
    return studentsID;
}


/******************************************************
* Accessor method for Student class to return the
* students phone number as needed.
*******************************************************/
string Student::getStudentsPhoneNumber() const{
    return studentsPhoneNumber;
}


/******************************************************
* Accessor method for Student class to return the
* students age as needed.
*******************************************************/
int Student::getStudentsAge() const {
    return studentsAge;
}


/******************************************************
* Accessor method for Student class to return the
* students gender as needed.
*******************************************************/
string Student::getStudentsGender() const{
    return studentsGender;
}


/******************************************************
* Accessor method for Student class to return the
* students class standing as needed.
*******************************************************/
string Student::getStudentsClassStanding() const{
    return studentsClassStanding;
}


/******************************************************
* Accessor method for Student class to return the
* students GPA as needed.
*******************************************************/
float Student::getStudentsGPA() const{
    return studentsGPA;
}


/******************************************************
* Class method for dispalying the attributes of the
Student class object as needed.
*******************************************************/
void Student::PrintStudentInformation() const {

    cout << endl << left;
    cout << setw(17) << getStudentsName();
    cout << setw(17) << getStudentsID();
    cout << setw(17) << getStudentsPhoneNumber();
    cout << setw(8) << getStudentsAge();
    cout << setw(10) << getStudentsGender();
    cout << setw(18) << getStudentsClassStanding();
    cout << setw(7) << fixed << setprecision(2) << getStudentsGPA();
    cout << endl;

}

