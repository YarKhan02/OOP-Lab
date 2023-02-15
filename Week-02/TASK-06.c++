#include <iostream>

using namespace std;

struct Student{
    string name;
    int year;
    char grade;
    int marks[3];
}s[5];

int main(){
    for (int i = 0; i < 5; i++){
        cout << "\nSTUDENT" << i + 1 << " DETAILS" << endl;
        cout << "Enter name of student" << i + 1 << ":";
        cin >> s[i].name;
        cout << "Enter batch of student" << i + 1 << ":";
        cin >> s[i].year;
        cout << "Enter grade of student" << i + 1 << ":";
        cin >> s[i].grade;
        cout << "Enter marks of student" << i + 1 << ":";
        for (int j = 0; j < 3; j++){
            cin >> s[i].marks[j];
        }
    }

    cout <<"\n\n";

    for (int i = 0; i < 5; i++){
        cout << "STUDENT" << i + 1 << "DETAILS" << endl;
        cout << "Name of student" << i + 1 << " is " << s[i].name;
        cout << "\nBatch of student" << i + 1 << " is " << s[i].year;
        cout << "\nGrade of student" << i + 1 << " is " << s[i].grade;
        cout << "\nMarks of student" << i + 1 << " is ";
        for (int j = 0; j < 3; j++){
            cout << s[i].marks[j];
        }
    }
}