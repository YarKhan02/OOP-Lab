#include "Employee.h"

Employee::Employee(string fn, string ln, int n){
    setFirstName(fn);
    setLastName(ln);
    setSalary(n);
}

void Employee::setFirstName(string fn){
    first_name = fn;
}
string Employee::getFirstName(){
    return first_name;
}

void Employee::setLastName(string ln){
    last_name = ln;
}
string Employee::getLastName(){
    return last_name;
}

void Employee::setSalary(int n){
    if (n < 0){
        salary = 0;
    }
    else{
        salary = n;
    }
}
int Employee::getSalary(){
    return salary;
}

void Employee::display(){
    cout << "Yearly salary of an employee is " << salary * 12 << endl << endl;
}

int Employee::raise(){
    salary += ((salary * 10) / 100);

    cout << "Employee salary after a 10% raise" << endl;

    display(); 
}

int main(){
    Employee e1("Wali Yar", "Khan", 12000);
    Employee e2("John", "Wick", 56790);

    cout << "Employee 1" << endl;
    e1.display();

    cout << "Employee 2" << endl;
    e2.display();

    cout << "Employee 1" << endl;
    e1.raise();
    cout << "Employee 2" << endl;
    e2.raise();
}