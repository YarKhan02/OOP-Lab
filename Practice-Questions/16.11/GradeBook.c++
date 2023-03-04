#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name, string instructorName){
    setCourseName(name);
    setInstructorName(instructorName);
}
void GradeBook::setCourseName(string name){
    courseName = name;
}
string GradeBook::getCourseName(){
    return courseName;
}
void GradeBook::setInstructorName(string name){
    courseInstructor = name;
}
string GradeBook::getInstructorName(){
    return courseInstructor;
}
void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
    << "\nThis course is presented by: " << getInstructorName() << "!\n" << endl;
}

int main(){
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "John Kennedy");
    GradeBook gradeBook2("CS102 Data Structures in C++", "Andrew Tate");

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
    
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << " by " << gradeBook1.getInstructorName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << " by " << gradeBook2.getInstructorName() << endl;
}