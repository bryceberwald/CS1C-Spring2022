/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
 **************************************************************/

#include "CS1Cstudent.h"
        
/******************************************************
 * Default constructor method for CS1Cstudent class.
 *******************************************************/
CS1Cstudent::CS1Cstudent() {
    totalScore = 0;
    knowledgeOfPython = false;
    projectedGraduationDate = "";
}


/******************************************************
 * Non-default constructor method for CS1Cstudent class.
 *******************************************************/
CS1Cstudent::CS1Cstudent(int score, bool pythonKnowledge, string graduationDate){

    totalScore = score;
    knowledgeOfPython = pythonKnowledge;
    projectedGraduationDate = graduationDate;

}


/******************************************************
* Destructor method for CS1Cstudent class.
*******************************************************/
CS1Cstudent::~CS1Cstudent() {
    
}


/******************************************************
* Mutator class method for changing the total score with
* the passed parameter.
*******************************************************/
void CS1Cstudent::setTotalScore(int score) {
    totalScore = score;
}


/******************************************************
* Mutator class method for changing the knowledge of
* python with the passed parameter.
*******************************************************/
void CS1Cstudent::setKnowledgeOfPython(bool pythonKnowledge) {
    knowledgeOfPython = pythonKnowledge;
}


/******************************************************
* Mutator class method for changing the graduation date 
* with the passed parameter.
*******************************************************/
void CS1Cstudent::setProjectedGraduationDate(string graduationDate) {
    projectedGraduationDate = graduationDate;
}


/******************************************************
* Accessor class method for returning the total score with
* the passed parameter.
*******************************************************/
int CS1Cstudent::getTotalScore() const {
    return totalScore;
}


/******************************************************
* Accessor class method for returning the knowledge of 
* Python with the passed parameter.
*******************************************************/
bool CS1Cstudent::getKnowledgeOfPython() const {
    return knowledgeOfPython;
}


/******************************************************
* Accessor class method for returning the graduation 
* date with the passed parameter.
*******************************************************/
string CS1Cstudent::getProjectedGraduationDate() const {
    return projectedGraduationDate;
}


/******************************************************
* Class method used to display the CS1Cstudent objects
attributes, along with the inheritated attributtes from
the Students class using redefining.
*******************************************************/
void CS1Cstudent::PrintStudentInformation() const {

    string pyKnowledge = "";
    
    cout << endl << left;
    cout << setw(17) << getStudentsName();
    cout << setw(17) << getStudentsID();
    cout << setw(17) << getStudentsPhoneNumber();
    cout << setw(8) << getStudentsAge();
    cout << setw(10) << getStudentsGender();
    cout << setw(18) << getStudentsClassStanding();
    cout << setw(7) << fixed << setprecision(2) << getStudentsGPA();
    cout << setw(20) << getTotalScore();

    if(getKnowledgeOfPython()) {
        pyKnowledge = "Yes";
    } else {
        pyKnowledge = "No";
    }

    cout << setw(20) << pyKnowledge;
    cout << setw(20) << getProjectedGraduationDate();
    cout << endl;

}

