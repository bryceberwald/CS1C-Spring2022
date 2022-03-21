/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    06
 * DUE DATE     :    MONDAY (03/28/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Student.h"
#include "SoftwareDeveloper.h"

int main() {
    // Call function to print class header to the console.
    PrintClassHeader(cout);

    // Create an object of the SoftwareDeveloper Class.
    SoftwareDeveloper Developer1;

    // Add information for Developer #1.
    Developer1.setStudentsName("Bryce Berwald");
    Developer1.setStudentsID(1212962);
    Developer1.setStudentsPhoneNumber("949-555-1234");
    Developer1.setStudentsAge(28);
    Developer1.setStudentsGender("M");
    Developer1.setStudentsClassStanding("Senior");
    Developer1.setStudentsGPA(3.8);
    Developer1.setAddress("1834 W Arrow Rte");
    Developer1.setCity("Upland");
    Developer1.setState("CA");
    Developer1.setZipCode(91876);

    Developer1.PrintHeader();
    Developer1.PrintInformation();
    cout << endl;

    // Create an object of the Student Class.
    Student Student1;

    // Add information for Student #1.
    Student1.setStudentsName("Cindy Saliba");
    Student1.setStudentsID(1234567);
    Student1.setStudentsPhoneNumber("949-555-7777");
    Student1.setStudentsAge(28);
    Student1.setStudentsGender("F");
    Student1.setStudentsClassStanding("Graduated");
    Student1.setStudentsGPA(4.0);

    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;

    // Call friend function which returns a boolean.
    bool ageIsEqual = ageEqualityCheck(Student1, Developer1);

    if(ageIsEqual == 1){
        cout << "\n" << Developer1.getStudentsName() << " and " << Student1.getStudentsName() << " have the same age. \n\n";
    } else {
        cout << "\n" << Developer1.getStudentsName() << " and " << Student1.getStudentsName() << " do NOT have the same age. \n\n";
    }

    Student1.setStudentsAge(26); // Call change age function.

    // Display updated information to the console.
    Developer1.PrintHeader();
    Developer1.PrintInformation();
    cout << endl;
    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;

    // Call friend function which returns a boolean.
    ageIsEqual = ageEqualityCheck(Student1, Developer1);

    if(ageIsEqual == 1){
        cout << "\n" << Developer1.getStudentsName() << " and " << Student1.getStudentsName() << " have the same age. \n\n";
    } else {
        cout << "\n" << Developer1.getStudentsName() << " and " << Student1.getStudentsName() << " do NOT have the same age. \n\n";
    }

    // Redisplay Student #1's information.
    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;

    // Create an object of the Student Class.
    Student Student2;

    // Add information for Student #2.
    Student2.setStudentsName("Bob Joe");
    Student2.setStudentsID(2233445);
    Student2.setStudentsPhoneNumber("949-555-0000");
    Student2.setStudentsAge(26);
    Student2.setStudentsGender("M");
    Student2.setStudentsClassStanding("Sophomore");
    Student2.setStudentsGPA(3.2);

    Student2.PrintHeader();
    Student2.PrintInformation();
    cout << endl;

    // Call equality operator overloador function.
    ageIsEqual = Student2.operator==(Student1);

    if(ageIsEqual == 1){
        cout << "\n" << Student1.getStudentsName() << " and " << Student2.getStudentsName() << " have the same age. \n\n";
    } else {
        cout << "\n" << Student1.getStudentsName() << " and " << Student2.getStudentsName() << " do NOT have the same age. \n\n";
    }

    Student2.setStudentsAge(99); // Call change age function.

    // Display updated information to the console.
    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;
    Student2.PrintHeader();
    Student2.PrintInformation();
    cout << endl;

    // Call equality operator overloador function.
    ageIsEqual = Student2.operator==(Student1);

    if(ageIsEqual == 1){
        cout << "\n" << Student1.getStudentsName() << " and " << Student2.getStudentsName() << " have the same age. \n\n";
    } else {
        cout << "\n" << Student1.getStudentsName() << " and " << Student2.getStudentsName() << " do NOT have the same age. \n\n";
    }

    // Display Student #2's information prior to addIntegerToAge() function is called.
    Student2.PrintHeader();
    Student2.PrintInformation();
    cout << endl;

    // Call function to add integer to add with the passed parameter.
    Student2.addIntegerToAge(7);
    cout << endl;

    // Display Student #2's information after addIntegerToAge() function is called.
    Student2.PrintHeader();
    Student2.PrintInformation();
    cout << endl;

    // Display Student #1's information prior to the addition overloaded operator being called.
    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;

    // Call addition overloaded operator to add a constant value.
    Student1.operator+();
    cout << endl;

    // Display Student #1's information after the addition overloaded operator has been called.
    Student1.PrintHeader();
    Student1.PrintInformation();
    cout << endl;

    // Create a new student object to be used with overloaded operator function calls.
    Student student3;

    // Call the extraction overloaded operator friend function.
    operator>>(cin, student3);

    // Call the insertion overloaded operator friend function.
    operator<<(cout, student3);

    return 0;
}

