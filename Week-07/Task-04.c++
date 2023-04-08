#include <iostream>
#include <ctime>

using namespace std;

class Number{
    public:
        int n;

        Number(){}

        void setNumber(int n){
            this -> n = n;
        }

        int getNumber(){
            return n;
        }
};

class Square: public Number{
    public:
        Square(int n){
            setNumber(n);
        }

        void square(){
            cout << "Square of a number is " << n*n << endl;
        }
};

class Cube: public Number{
    public:
        Cube(int n){
            setNumber(n);
        }

        void cube(){
            cout << "Cube of a number is " << n*n*n << endl;
        }
};

int main(){
    Square s(5);
    s.square();

    Cube c(3);
    c.cube();
}