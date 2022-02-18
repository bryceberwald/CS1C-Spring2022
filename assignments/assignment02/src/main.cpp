/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    02
 * DUE DATE     :    Friday (02/04/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Student.h"
#include "CS1Cstudent.h"

int main() {
    // Call function to print class header to the console.
    PrintClassHeader(cout);

    // Create array to hold regular type of students.
    Student students[STUDENTS_MAX_ARRAY_SIZE];

    // Test data used with non-default constructors.
    Student Celine("Celine Dion", 444444, "949-555-1234", 52, "F", "Freshmen", 4.0);
    Student Madonna("Madonna", 123456, "714-555-5555", 62, "F", "Sophomore", 3.23);
    Student Jennifer("Jennifer Lopez", 876542, "760-703-1234", 51, "F", "Sophomore", 3.79);
    
    Student Lady;

    // Use mutator methods in the Student Class.
    Lady.setStudentsName("Lady Gaga");
    Lady.setStudentsID(777744);
    Lady.setStudentsPhoneNumber("213-55-6789");
    Lady.setStudentsAge(34);
    Lady.setStudentsGender("F");
    Lady.setStudentsClassStanding("Freshmen");
    Lady.setStudentsGPA(2.1);

    // Fill array with new Student objects created.
    students[0] = Celine;
    students[1] = Madonna;
    students[2] = Jennifer;
    students[3] = Lady;

    cout << "\nSTUDENTS: ";

    // Call function to print display header for Student objects.
    PrintStudentObjectHeader();

    // Loop through array, displaying new contents.
    for(int i = 0; i < STUDENTS_MAX_ARRAY_SIZE; i++) {
        students[i].PrintStudentInformation();
    }

    // Array used to hold all CS1Cstudent objects created.
    CS1Cstudent cs1cStudents[CS1C_STUDENTS_MAX_ARRAY_SIZE];

    // Test data used with non-deafault class constructor.
    CS1Cstudent Adele(500, true, "12/12/2021");
    CS1Cstudent Taylor(700, false, "05/11/2021");
    CS1Cstudent Bruno(800, true, "12/11/2021");

    // 6. Write software to change the name, age, phone number, student ID and class standing of a CS1Cstudent object.
    // CS1Cstudent class mutator methods used to set private data within inheritated Student class.
    Adele.setStudentsName("Adele");
    Adele.setStudentsID(667788);
    Adele.setStudentsPhoneNumber("949-665-1234");
    Adele.setStudentsAge(32);
    Adele.setStudentsGender("F");
    Adele.setStudentsClassStanding("Freshmen");
    Adele.setStudentsGPA(3.3);

    Taylor.setStudentsName("Taylor Swift");
    Taylor.setStudentsID(156789);
    Taylor.setStudentsPhoneNumber("248-555-6543");
    Taylor.setStudentsAge(30);
    Taylor.setStudentsGender("F");
    Taylor.setStudentsClassStanding("Sophomore");
    Taylor.setStudentsGPA(3.9);

    Bruno.setStudentsName("Bruno Mars");
    Bruno.setStudentsID(876543);
    Bruno.setStudentsPhoneNumber("703-703-7654");
    Bruno.setStudentsAge(35);
    Bruno.setStudentsGender("M");
    Bruno.setStudentsClassStanding("Sophomore");
    Bruno.setStudentsGPA(3.2);

    // Fill array with new CS1Cstudent objects created.
    cs1cStudents[0] = Adele;
    cs1cStudents[1] = Taylor;
    cs1cStudents[2] = Bruno;

    cout << "\nCS1C STUDENTS: ";

    // Call function to dipslay the CS1Cstudent class header as needed.
    PrintCS1CStudentObjectHeader();

    // Loop through cs1cStudents array, displaying each students information.
    for(int i = 0; i < CS1C_STUDENTS_MAX_ARRAY_SIZE; i++) {
        cs1cStudents[i].PrintStudentInformation();
    }

    cout << endl;

    return 0;
}