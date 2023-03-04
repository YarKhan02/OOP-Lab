#include <iostream>

using namespace std;

class Student{
    public: 
        string name, address;
        int age;

        Student(){
            name = "unknwn";
            address = "not available";
            age = 0;
        }

        Student(string n, int a, string ad){
            name = n;
            address = ad;
            age = a;
        }

        void print(){
            cout << "Name of student: " << name << endl;
            cout << "Address of student: " << address << endl;
            cout << "Age of student: " << age << endl;
        }
};

int main(){
    Student students[10];

    students[0] = Student("Wali", 20, "Karachi");
    students[1] = Student("Abdullah", 21, "Lahore");
    students[2] = Student("Shabbir", 19, "Islamabad");
    students[3] = Student("Arsalan", 22, "Peshawer");
    students[4] = Student("Haris", 18, "Quetta");
    students[5] = Student("Ali", 23, "Multan");
    students[6] = Student("Saad", 20, "Kashmir");
    students[7] = Student("Huzaifa", 21, "Hyderabad");
    students[8] = Student("Aashir", 19, "Lyari");
    students[9] = Student("Usaid", 22, "Kati Pahari");

    for (int i = 0; i < 10; i++){
        cout << "Student-" << i + 1 << endl;
        students[i].print();
        cout << endl;
    }
}
    
