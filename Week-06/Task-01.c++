#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        int id;
        string name;
        int grade;

    public:
        Student(int id, string name, int grade) {
            initialize(id, name, grade);
        }

        void initialize(int id, string name, int grade) {
            this->id = id;
            this->name = name;
            this->grade = grade;
        }

        void reinitialize() const {
            cout << "Not allowed to reinitialize" << endl;
        }

        void display() const {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student student(4734, "Wali Yar", 3.25);

    student.reinitialize();
    student.display();
}