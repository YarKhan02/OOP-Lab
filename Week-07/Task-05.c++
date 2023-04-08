#include <iostream>
#include <string>

using namespace std;

class Employee {
    public:
        string name;
        int empID;
        string jobTitle;

        Employee(string n, int id, string title) {
            name = n;
            empID = id;
            jobTitle = title;
        }

        virtual double calculate_income() = 0;
        virtual double calculate_income(int hoursWorked) = 0;

        virtual void display_info() {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Job Title: " << jobTitle << endl;
        }
};

class HourlyEmployee : public Employee {
    public:
        double hourlyIncome;

        HourlyEmployee(string n, int id, string title, double hi) : Employee(n, id, title) {
            hourlyIncome = hi;
        }

        double calculate_income(int hoursWorked) override {
            double totalIncome = hourlyIncome * hoursWorked;
            return totalIncome;
        }

        void display_info() override {
            Employee::display_info();
            cout << "Hourly Income: " << hourlyIncome << endl;
        }
};

class PermanentEmployee : public Employee {
    public:
        double hourlyIncome;

        PermanentEmployee(string n, int id, string title, double hi) : Employee(n, id, title) {
            hourlyIncome = hi;
        }

        double calculate_income() override {
            double totalIncome = hourlyIncome * 240;
            return totalIncome;
        }

        void display_info() override {
            Employee::display_info();
            cout << "Hourly Income: " << hourlyIncome << endl;
        }
};

int main() {
    HourlyEmployee he("John Doe", 1001, "Engineer", 150.0);
    double hi = he.hourlyIncome;
    double totalIncome = he.calculate_income(160);
    double bonus = calculate_bonus(&he);

    cout << "Hourly Employee Info:" << endl;
    he.display_info();
    cout << "Hours Worked: " << hw << endl;
    cout << "Total Income: " << totalIncome << endl;

    PermanentEmployee pe("Jane Smith", 2001, "Manager", 200.0);
    hi = pe.hourlyIncome;
    totalIncome = pe.calculate_income();

    cout << "Permanent Employee Info:" << endl;
    pe.display_info();
    cout << "Total Income: " << totalIncome << endl;
}
