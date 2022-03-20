/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    06
 * DUE DATE     :    MONDAY (03/28/22) @ 11:59pm
 **************************************************************/

#include "SoftwareDeveloper.h"

/******************************************************
* This function is the default-constructor for the
* SoftwareDeveloper Class.
*******************************************************/
SoftwareDeveloper::SoftwareDeveloper(){
    this->address = new char;
    this->city = new char;
    this->state = new char;
    this->zipCode = 000000;
}


/******************************************************
* This function is the non-default constructor for the
* SoftwareDeveloper Class.
*******************************************************/
SoftwareDeveloper::SoftwareDeveloper(char* address, char* city, char* state, int zip){
    this->address = new char;
    this->city = new char;
    this->state = new char;
    this->zipCode = 000000;
    
    this->address = address;
    this->city = city;
    this->state = state;
    this->zipCode = zip;
}


/******************************************************
* This function is the copy-constructor for the
* SoftwareDeveloper Class.
*******************************************************/
SoftwareDeveloper::SoftwareDeveloper(SoftwareDeveloper& developer){
    this->address = new char;
    this->city = new char;
    this->state = new char;
    this->zipCode = 000000;

    this->address = developer.address;
    this->city = developer.city;
    this->state = developer.state;
    this->zipCode = developer.zipCode;
}


/******************************************************
* This function is the destructor for the Software
* Developer class, being used to deallocate memory.
*******************************************************/
SoftwareDeveloper::~SoftwareDeveloper(){
    this->address = NULL;
    this->city = NULL;
    this->state = NULL;
    delete [] this->address;
    delete [] this->city;
    delete [] this->state;
}


/******************************************************
* This is the class method for setting the address attribute.
*******************************************************/
void SoftwareDeveloper::setAddress(char* address){
    this->address = address;
}


/******************************************************
* This is the class method for setting the city attribute.
*******************************************************/
void SoftwareDeveloper::setCity(char* city){
    this->city = city;
}


/******************************************************
* This is the class method for setting the state attribute.
*******************************************************/
void SoftwareDeveloper::setState(char* state){
    this->state = state;
}


/******************************************************
* This is the class method for setting the zip code
* attribute.
*******************************************************/
void SoftwareDeveloper::setZipCode(int zip){
    this->zipCode = zip;
}


/******************************************************
* This is the class method for providing a deep copy of
* the students information by using the object being
* passed by reference to set data.
*******************************************************/
void SoftwareDeveloper::DeepCopyStudentInfo(SoftwareDeveloper &developer){
    this->setStudentsName(developer.getStudentsName());
    this->setStudentsID(developer.getStudentsID());
    this->setStudentsPhoneNumber(developer.getStudentsPhoneNumber());
    this->setStudentsAge(developer.getStudentsAge());
    this->setStudentsGender(developer.getStudentsGender());
    this->setStudentsClassStanding(developer.getStudentsClassStanding());
    this->setStudentsGPA(developer.getStudentsGPA());
}


/******************************************************
* This is the class method for changing the default
* information provided by the bases default constructor.
*******************************************************/
void SoftwareDeveloper::AddStudentInfo(string name, int id, string phone, int age,
					                   string gender, string standing, float gpa){
    this->setStudentsName(name);
    this->setStudentsID(id);
    this->setStudentsPhoneNumber(phone);
    this->setStudentsAge(age);
    this->setStudentsGender(gender);
    this->setStudentsClassStanding(standing);
    this->setStudentsGPA(gpa);
}


/******************************************************
* Class method for returning the address.
*******************************************************/
char* SoftwareDeveloper::getAddress() const{
    return this->address;
}


/******************************************************
* Class method for returning the city.
*******************************************************/
char* SoftwareDeveloper::getCity() const{
    return this->city;
}


/******************************************************
* Class method for returning the state.
*******************************************************/
char* SoftwareDeveloper::getState() const{
    return this->state;
}


/******************************************************
* Class method for returning the zip code.
*******************************************************/
int SoftwareDeveloper::getZipCode() const{
    return this->zipCode;
}


/******************************************************
* Class method for displaying a header for the information
* to be displayed to the console. Over riden by the base
* class if called.
*******************************************************/
void SoftwareDeveloper::PrintHeader() const{
    cout << endl << left << setw(17);
	cout << "Name: " << setw(17) << "Students ID: "
         << setw(17) << "Phone Number: " << setw(8) << "Age: "
         << setw(10) << "Gender: " << setw(18) << "Class Standing: "
         << setw(9) << "GPA: " << setw(22) << "Address: " << setw(15) << "City: " << setw(10) << "State: " << setw(10) << "Zip Code: " << endl;

    cout << right << setfill('-');
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(17) << " ";
    cout << setw(8) << " ";
    cout << setw(10) << " ";
    cout << setw(18) << " ";
    cout << setw(9) << " ";
    cout << setw(22) << " ";
    cout << setw(15) << " ";
    cout << setw(10) << " ";
    cout << setw(10) << " ";
    cout << left << setfill(' ') << endl;
}


/******************************************************
* Class method for displaying the developers information
* to the console as needed.
*******************************************************/
void SoftwareDeveloper::PrintInformation() const{
    cout << endl << left;
    cout << setw(17) << getStudentsName();
    cout << setw(17) << getStudentsID();
    cout << setw(17) << getStudentsPhoneNumber();
    cout << setw(8) << getStudentsAge();
    cout << setw(10) << getStudentsGender();
    cout << setw(18) << getStudentsClassStanding();
    cout << setw(9) << fixed << setprecision(2) << getStudentsGPA();
    cout << setw(22) << this->address;
    cout << setw(15) << this->city;
    cout << setw(10) << this->state;
    cout << setw(10) << this->zipCode;
    cout << endl;
}

