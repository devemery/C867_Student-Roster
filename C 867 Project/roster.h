#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <string>
#include "degree.h"
#include <array>
using namespace std;

//Roster class header file and declarations

class Roster {
public:
	
	Roster(int classSz);
	string GetStudentID(int index);
	void add(string studentData);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(degree degrPr);
	~Roster();
	int classSize;
	int index;
private:
	Student* classRosterArray[5]; 
	
};

#endif

