// C 867 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"
#include <string>
#include <array>
using namespace std;

int main()
{
    cout << "Course Title: C867: Scripting and Programming - Applications" << endl;
    cout << "Programming Language Used: C++" << endl;
    cout << "Name: Devin Emery" << endl;
    cout << "Student ID: 001172014 " << endl << endl;

    //Student Data
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Devin,Emery,demery4@wgu.edu,24,14,21,25,SOFTWARE"
    };
    
    //Creating Class Roster
    Roster* classRoster = new Roster(5);

    //Adding each index of student data to a new Student class obj
    for (int i = 0; i < 5; ++i) {
        classRoster->add(studentData[i]);
    };

    //Demonstrating Functionality

    //Printing class roster
    classRoster->printAll();

    //Printing invalid emails
    classRoster->printInvalidEmails();

    for (int i = 0; i < 5; ++i) {

        classRoster->printAverageDaysInCourse(classRoster->GetStudentID(i));
    }
    cout << endl;
    
    //Printing students with SOFTWARE Degree
    classRoster->printByDegreeProgram(SOFTWARE);
    cout << endl;

    //Removing Student A3
    classRoster->remove("A3");
    cout << endl;

    //Printing new class roster
    classRoster->printAll();
    cout << endl;

    //Testing "student not found" error
    classRoster->remove("A3");
    cout << endl;

    //Destructor
    classRoster->~Roster();
    delete classRoster;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
