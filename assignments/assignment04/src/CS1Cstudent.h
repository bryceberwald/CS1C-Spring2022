/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
 **************************************************************/

#ifndef CS1CSTUDENT_H
#define CS1CSTUDENT_H

#include "Student.h"

#include <iostream> // For input & output.
#include <iomanip>  // For manipulating the input & output.
#include <string>   // For strings to be used.
#include <sstream>  // For string stream to be used.

using namespace std;

/************************************************************************** 
 * CS1Cstudent Class derived from the student class.
 *************************************************************************/
class CS1Cstudent:public Student{
    public:
		/******************************************************
		**********   CONSTRUCTOR && DESTRUCTOR    *************
		*******************************************************/

		/******************************************************
		 * CS1Cstudent (); (default)
		 * Constructor; Initialize Student attributes.
		 * Parameters: none
		 * Return: none
		 *******************************************************/
		CS1Cstudent();

		/******************************************************
		 * CS1Cstudent (); (non-default)
		 * Constructor; Initialize Student attributes.
		 * Parameters: score, pythonKnowledge, graduationDate
		 * Return: none
		 *******************************************************/
		CS1Cstudent(int score, bool pythonKnowledge, string graduationDate);

		/******************************************************
		* ~CS1Cstudent ();                                       
		* Destructor; Does not perform any specific function  
		* Parameters: none                                    
		* Return: none
		*******************************************************/
		~CS1Cstudent();

		/******************************************************
		*****************     MUTATORS    *********************
		*******************************************************/

		/******************************************************
		* Class method for changing the total score.
		*******************************************************/
		void setTotalScore(int score);

		/******************************************************
		* Class method for changing the knowdelege of python.
		*******************************************************/
		void setKnowledgeOfPython(bool pythonKnowledge);

		/******************************************************
		* Class method for chnaging the graduation date.
		*******************************************************/
		void setProjectedGraduationDate(string graduationDate);

		/******************************************************
		*****************     ACCESSORS    ********************
		*******************************************************/

		/******************************************************
		* Class method for returning the total score.
		*******************************************************/
		int getTotalScore() const;

		/******************************************************
		* Class method for returning the knowledge of python.
		*******************************************************/
		bool getKnowledgeOfPython() const;

		/******************************************************
		* Class method for returning the graduation date.
		*******************************************************/
		string getProjectedGraduationDate() const;
		
		/******************************************************
		* Class method used to display the contents with extended
		* attributes from Students class using redefinition.
		*******************************************************/
		void PrintStudentInformation() const;

    protected:
        // None!!!

    private:
        int totalScore;
        bool knowledgeOfPython;
        string projectedGraduationDate;
		
};


#endif