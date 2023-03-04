#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    public:
        GradeBook(string, string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void setInstructorName(string);
        string getInstructorName();

    private:
        string courseName;
        string courseInstructor;
};