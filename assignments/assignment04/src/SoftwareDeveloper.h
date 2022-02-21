/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Friday (02/21/22) @ 11:59pm
 **************************************************************/

#ifndef SOFTWAREDEVELOPER_H
#define SOFTWAREDEVELOPER_H

#include "Student.h"

#include <iostream> // For input & output.
#include <iomanip>  // For manipulating the input & output.
#include <string>   // For strings to be used.
#include <sstream>  // For string stream to be used.
#include <cstring>

/**************************************************************************
 * SoftwareDeveloper class derived from Student Class
 *************************************************************************/
class SoftwareDeveloper : public Student {

    public:
    	/******************************************************
		**********   CONSTRUCTOR && DESTRUCTOR    *************
		*******************************************************/

        /******************************************************
		 * SoftwareDeveloper(); (default)
		 * Constructor; Allocate space for the private attributes.
		 * Parameters: none
		 * Return: none
		 *******************************************************/
        SoftwareDeveloper();

		/******************************************************
		 * SoftwareDeveloper(); (non-default)
		 * Constructor; Initialize attributes
		 * Parameters: none
		 * Return: none
		 *******************************************************/
		SoftwareDeveloper(char* address, char* city, char* state, int zip);

        /******************************************************
		 * SoftwareDeveloper(); (copy-constructor)
		 * Constructor; copy attributes.
		 * Parameters: address, city, state, zip code
		 * Return: none
		 *******************************************************/
        SoftwareDeveloper(SoftwareDeveloper& developer);

        /******************************************************
		* ~SoftwareDeveloper();                                       
		* Destructor; Deallocate dyncamic memory
		* Parameters: none                                    
		* Return: none
		*******************************************************/
        ~SoftwareDeveloper();

		/******************************************************
		*****************     MUTATORS    *********************
		*******************************************************/

        /******************************************************
		* Class method for setting the address attribute.
		*******************************************************/
        void setAddress(char* address);

        /******************************************************
		* Class method for setting the city attribute.
		*******************************************************/
        void setCity(char* city);

        /******************************************************
		* Class method for setting the state attribute.
		*******************************************************/
        void setState(char* state);

        /******************************************************
		* Class method for setting the zip code attribute.
		*******************************************************/
        void setZipCode(int zip);

        /******************************************************
		* Class method for changing the default information
		provided by the default constructor in the base class
		being called prior to intitializion in derived class.
		*******************************************************/
		void AddStudentInfo(string name, int id, string phone, int age,
							string gender, string standing, float gpa);

        /******************************************************
		* Class method for providing a deep copy of the base
		class attributes by passing another SoftwareDeveloper
		object as a parameter to be used for copying.
		*******************************************************/
        void DeepCopyStudentInfo(SoftwareDeveloper &developer);

        /******************************************************
		*****************     ACCESSORS    ********************
		*******************************************************/
        
        /******************************************************
		* Class method for returning the address.
		*******************************************************/
        char* getAddress() const;
        
        /******************************************************
		* Class method for returning the city.
		*******************************************************/
        char* getCity() const;

        /******************************************************
		* Class method for returning the state.
		*******************************************************/
        char* getState() const;

        /******************************************************
		* Class method for returning the zip code.
		*******************************************************/
        int getZipCode() const;

		/******************************************************
		* Class method for displaying the header for
		SoftwareDevelopers information to be displayed neatly.
		*******************************************************/
        void PrintHeader() const;

        /******************************************************
		* Class method for printing the developers information
		to the console, overriding the base classes method.
		*******************************************************/
        void PrintInformation() const;

    protected:
        // Nothing!

    private:
        char* address;
        char* city;
        char* state;
        int zipCode;
};

#endif