/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    04
 * DUE DATE     :    Friday (02/21/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Student.h"
#include "SoftwareDeveloper.h"

int main() {
    // Call function to print class header to the console.
    PrintClassHeader(cout);

    // Create instance of SoftwareDeveloper class using default constructor.
    SoftwareDeveloper Developer1;

    // Add information to the developer at hand.
    Developer1.setStudentsName("Joe Calculus");
    Developer1.setStudentsID(64879);
    Developer1.setStudentsPhoneNumber("949-555-1234");
    Developer1.setStudentsAge(44);
    Developer1.setStudentsGender("M");
    Developer1.setStudentsClassStanding("Freshman");
    Developer1.setStudentsGPA(3.3);
    Developer1.setAddress("1234 Main Avenue");
    Developer1.setCity("Laguna Niguel");
    Developer1.setState("CA");
    Developer1.setZipCode(92677);

    // Call copy constructor and deep copy method to reuse information if possible.
    SoftwareDeveloper Developer2(Developer1);
    Developer2.DeepCopyStudentInfo(Developer1);

    // Add the information needed to the developer.
    Developer2.setStudentsName("Mary Algebra");
    Developer2.setStudentsID(76309);
    Developer2.setStudentsPhoneNumber("213-555-5555");
    Developer2.setStudentsAge(21);
    Developer2.setStudentsGender("F");
    Developer2.setStudentsClassStanding("Junior");
    Developer2.setStudentsGPA(4.0);
    Developer2.setAddress("3333 Marguerite Pkwy");
    Developer2.setCity("Mission Viejo");
    Developer2.setZipCode(92646);

    // Call non-default constructor.
    SoftwareDeveloper Developer3("9876 Elm Street", "San Clemente", "CA", 92672);

    // Call method to add student info for the developer.
    Developer3.AddStudentInfo("Joe Trig", 10192, "714-703-1234", 28, "F", "Senior", 2.9);

    // Print header before displaying all of the software developers.
    PrintSoftwareDeveloperHeader();

    // Print all developers information to the console.
    Developer1.PrintInformation();
    Developer2.PrintInformation();
    Developer3.PrintInformation();

    return 0;
}