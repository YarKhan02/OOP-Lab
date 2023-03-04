#include <iostream>
using namespace std;

class Employee{
    private:
        string first_name, last_name;
        int salary;
    
    public:
        Employee(string, string, int);

        void setFirstName(string);
        void setLastName(string);
        void setSalary(int);

        string getFirstName();
        string getLastName();
        int getSalary();

        void display();

        int raise();
};