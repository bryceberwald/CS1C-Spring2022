/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    06
 * DUE DATE     :    MONDAY (03/28/22) @ 11:59pm
 **************************************************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream> // For input & output.
#include <iomanip>  // For manipulating the input & output.
#include <string>   // For strings to be used.
#include <sstream>  // For string stream to be used.
#include <ostream>
#include <istream>

using namespace std;

/**************************************************************************
 * Student Class
 *************************************************************************/
class Student
{
    public:
		/******************************************************
		**********   CONSTRUCTOR && DESTRUCTOR    *************
		*******************************************************/

		/******************************************************
		 * Student (); (default)
		 * Constructor; Initialize Student attributes.
		 * Parameters: none
		 * Return: none
		 *******************************************************/
		Student();

        /******************************************************
		 * Student (); (non-default)
		 * Constructor; Initialize Student attributes.
		 * Parameters: name, id, phone number, gender, class
         * standing, gpa
		 * Return: none
		 *******************************************************/
		Student(string name, int id, string phoneNumber, int age, string gender, 
                string classStanding, float gpa);

		/******************************************************
		* ~Student ();                                       
		* Destructor; Does not perform any specific function  
		* Parameters: none                                    
		* Return: none
		*******************************************************/
		~Student();

		/******************************************************
		*************     FRIEND FUNCTIONS    *****************
		*******************************************************/

		/******************************************************
		****     FRIEND / OPERATOR OVERLOADED FUNCTIONS    ****
		*******************************************************/
		friend bool ageEqualityCheck(Student student1, Student student2);
		friend void operator<<(ostream& output, Student& student);
		friend void operator>>(istream& input, Student& student);
		bool operator==(const Student& student1)const;
		void operator+();

		/******************************************************
		*****************     MUTATORS    *********************
		*******************************************************/

		/******************************************************
		* Class method for adding integer value to age.
		*******************************************************/
		void addIntegerToAge(int addedValue);

		/******************************************************
		* Class method for changing students name.
		*******************************************************/
		void setStudentsName(string name);

        /******************************************************
		* Class method for changing the students ID.
		*******************************************************/
		void setStudentsID(int id);

        /******************************************************
		* Class method for changing the students Phone Number.
		*******************************************************/
		void setStudentsPhoneNumber(string phoneNumber);

        /******************************************************
		* Class method for changing the students Age.
		*******************************************************/
		void setStudentsAge(int age);

        /******************************************************
		* Class method for changing the students Gender.
		*******************************************************/
		void setStudentsGender(string gender);

        /******************************************************
		* Class method for changing the students class standing.
		*******************************************************/
		void setStudentsClassStanding(string classStanding);

        /******************************************************
		* Class method for changing the students GPA.
		*******************************************************/
		void setStudentsGPA(float gpa);

		/******************************************************
		*****************     ACCESSORS    ********************
		*******************************************************/

        /******************************************************
		* Class method for returning the students name.
		*******************************************************/
		string getStudentsName() const;

        /******************************************************
		* Class method for returning the students ID.
		*******************************************************/
		int getStudentsID() const;

        /******************************************************
		* Class method for returning the students phone number.
		*******************************************************/
		string getStudentsPhoneNumber() const;

		/******************************************************
		* Class method for returning the students age.
		*******************************************************/
		int getStudentsAge() const;

        /******************************************************
		* Class method for returning the students gender.
		*******************************************************/
		string getStudentsGender() const;

        /******************************************************
		* Class method for returning the students class standing.
		*******************************************************/
		string getStudentsClassStanding() const;

        /******************************************************
		* Class method for returning the students GPA.
		*******************************************************/
		float getStudentsGPA() const;

		/******************************************************
		* Class method for display the header for information.
		*******************************************************/
		void PrintHeader() const;

		/******************************************************
		* Class method for display the Student class attributes
		* to the console as needed.
		*******************************************************/
		void PrintInformation() const;

    protected:
		// Nothing!

    private:
        string studentsName;
        int studentsID;
        string studentsPhoneNumber;
        int studentsAge;
        string studentsGender;
        string studentsClassStanding;
        float studentsGPA;
};

#endif