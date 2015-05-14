#include <iostream>
#include "Student.h"

using namespace std;
using namespace Student;
enum Grades {F=0; D, C, B, A};

Student() {
  struct student {
    studentID = 0;
    credits = 0;
    GPA = 0.0;
  };
};

Student(int ID) {
  struct student {
   studentID = ID;
    credits = 0;
    GPA = 0.0;
  };
};

void Student(int ID, int cr, double grPtAv) {
  struct student {
   studentID = ID;
   credits = cr;
   GPA = grPtAv;
  };
};


int getID() const {return studentID};
int getCredits()const {return credits};
int getGPA() const {return GPA};

void update(char grade, int cr){

  GPA  =  ((GPA * credits) + ( ((Grade) grade)* cr))/(credits + cr);

  credits = credits + cr;


};


void print() const{
  char comma = ',';
  cout << studentID << comma << credits << comma << GPA;

};  

