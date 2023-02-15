#include <iostream>
using namespace std;

class Employee{
    private:
        string name, address;
        int age, year;

    public:
        void setEmployee(string n, int a, int y, string ad){
            name = n;
            age = a;
            year = y;
            address = ad;
        }

        void display(){
            cout << name << "\t" << year << "\t\t" << address << endl;
        }
};

int main(){
    Employee e1, e2, e3;

    e1.setEmployee("Wali", 20, 2002, "Karachi");
    e2.setEmployee("Yar", 21, 2001, "Lahore");
    e3.setEmployee("Khan", 19, 2003, "Quetta");

    cout << "Name\tYearOfJoining\tAddress" << endl;

    e1.display();
    e2.display();
    e3.display();
}