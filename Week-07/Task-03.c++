#include <iostream>
#include <ctime>

using namespace std;

class Marks{
    public:
        int roll_no;
        string name;
        int marks;

        Marks(){}

        void set_data(string name, int roll_no){
            this->name = name;
            this->roll_no = roll_no;
        }
};

class Physics: public Marks{
    public:
        int marks_p;

        Physics(){}

        void set_Physics(int m){
            this -> marks_p = m;
        }
};

class Chemistry: public Marks{
    public:
        int marks_c;

        Chemistry(){}

        void set_Chemistry(int m){
            this -> marks_c = m;
        }
};

class Mathematics: public Marks{
    public:
        int marks_m;

        Mathematics(){}

        void set_Mathematics(int m){
            this -> marks_m = m;
        }
};

class Result: public Physics, public Chemistry, public Mathematics, public Marks{
    public:
        int avg, total;

        Result(){
            avg = 0;
            total = 0;
        }

        void calculate_total(){
            total = marks_p + marks_c + marks_m;
        }

        void average(){
            avg = total / 3;
        }

        void report(){
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << avg << endl;
        }
};

int main(){
    Result r;

    r.set_Mathematics(77);
    r.set_Chemistry(85);
    r.set_Physics(93);
    r.calculate_total();
    r.average();
    r.report();
}