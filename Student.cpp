#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char sname[]) {
  studentId = id;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id - " << studentId << endl;
  cout << "Name - " << name << endl;
  
}
