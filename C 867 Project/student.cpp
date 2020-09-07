#include <iostream>
#include <string>
#include "degree.h"
using namespace std;
#include "student.h"

//Student class function definitions

//Constructor
Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddr = "";
	this->age = 0;
	this->daysToComp[0] = 0;
	this->daysToComp[1] = 0;
	this->daysToComp[2] = 0;
	this->degrProg;
}
//Set student ID
void Student::SetID(string id) {
	this->studentID = id;
	
	return;
}
//Set student's first name
void Student::SetFirstName(string fName) {
	this->firstName = fName;

	return;
}
//Set student's last name
void Student::SetLastName(string lName) {
	this->lastName = lName;

	return;
}
//Set student's email address
void Student::SetEmailAddr(string emailAd) {
	this->emailAddr = emailAd;

	return;
}
//Set student's age
void Student::SetAge(int yrsOld) {
	this->age = yrsOld;

	return;
}
//Set number of days to complete a student's 3 courses
void Student::SetDaysToComp(int compTime1, int compTime2, int compTime3) {
	this->daysToComp[0] = compTime1;
	this->daysToComp[1] = compTime2;
	this->daysToComp[2] = compTime3;

	return;
}
//Sets student's degree program
void Student::SetDegreeProg(degree degrPr) {
	this->degrProg = degrPr;

	return;
}
//Gets student ID
string Student::GetID() {
	return studentID;
}
//Gets student's first name
string Student::GetFirstName() {
	return firstName;
}
//Gets studetn's last name
string Student::GetLastName() {
	return lastName;
}
//Gets studetn's email address
string Student::GetEmailAddr() {
	return emailAddr;
}
//Gets studetn's age
int Student::GetAge() {
	return age;
}
//Next three Get's the days to compete for each of the student's 3 classes
int Student::GetDaysToComp1() {									
	return daysToComp[0];
}
int Student::GetDaysToComp2() {
	return daysToComp[1];
}
int Student::GetDaysToComp3() {
	return daysToComp[2];
}
//Get's students degree program
degree Student::GetDegreeProg() {
	return degrProg;
}
//Prints only student ID
void Student::PrintID() {
	cout << studentID;

	return;
}
//Prints only student's first name
void Student::PrintFirstName() {
	cout << firstName << endl;
	
	return;
}
//Prints only student's last name
void Student::PrintLastName() {
	cout << lastName << endl;

	return;
}
//Prints only student's email
void Student::PrintEmailAddr() {
	cout << emailAddr << endl;

	return;
}
//Prints only student's age
void Student::PrintAge() {
	cout << age << endl;

	return;
}
//Prints student's days to complete each course
void Student::PrintDaysToComp() {
	cout << daysToComp[0] << ", " << daysToComp[1] << ", " << daysToComp[2] << endl;

	return;
}
//Prints studen'ts degree
void Student::PrintDegreeProg() {
	string degreeString;
	if (degrProg == SECURITY) {
		degreeString = "SECURITY";
	}
	else if (degrProg == NETWORK) {
		degreeString = "NETWORK";
	}
	else if (degrProg == SOFTWARE) {
		degreeString = "SOFTWARE";
	}
	else {
		degreeString = "ERROR";
	}
	cout << degreeString << endl;

	return;
}
//Prints all student info in the required format
void Student::PrintAllStudentInfo() {
	string degreeString;
	if (degrProg == SECURITY) {
		degreeString = "SECURITY";
	}
	else if (degrProg == NETWORK) {
		degreeString = "NETWORK";
	}
	else if (degrProg == SOFTWARE) {
		degreeString = "SOFTWARE";
	}
	else {
		degreeString = "ERROR";
	}
	
	cout << studentID << "   First Name: " << firstName << "   Last Name: " << lastName << "   Age: " << age << "   daysInCourse: {" << daysToComp[0] << ", " << daysToComp[1]
	<< ", " << daysToComp[2] << "}   Degree Program: " << degreeString << "." << endl;
		
		return;
}
