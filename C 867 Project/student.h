#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

//Student class header file and declarations

class Student {
public:
	Student();
	void SetID(string id);
	void SetFirstName(string fName);
	void SetLastName(string lName);
	void SetEmailAddr(string emailAd);
	void SetAge(int yrsOld);
	void SetDaysToComp(int compTime1, int compTime2, int compTime3);
	void SetDegreeProg(degree degrPr);
	string GetID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddr();
	int GetAge();
	int GetDaysToComp1();
	int GetDaysToComp2();
	int GetDaysToComp3();
	degree GetDegreeProg();
	void PrintID();
	void PrintFirstName();
	void PrintLastName();
	void PrintEmailAddr();
	void PrintAge();
	void PrintDaysToComp();
	void PrintDegreeProg();
	void PrintAllStudentInfo();


private:

	string studentID;
	string firstName;
	string lastName;
	string emailAddr;
	int age;
	int daysToComp[3];
	degree degrProg;

};


#endif

