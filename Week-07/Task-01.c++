#include <iostream>

using namespace std;

class Shape{
    public:
        int x, y;

        void set_length(int x, int y){
            this -> x = x;
            this -> y = y;
        }

        void display(){
            cout << x + y << endl;
        }
};

class Triangle: public Shape{
    public:
        Triangle(int x, int y){
            set_length(x, y);
        }

        void display(){
            cout << "Area of triangle: " << (x * y) / 2 << endl;
        }
};

class Rectangle: public Shape{
    public:
        Rectangle(int x, int y){
            set_length(x, y);
        }

        void display(){
            cout << "Area of rectangle: " << x * y << endl;
        }
};

int main(){
    Triangle t(7, 4);
    t.display();

    Rectangle r(3, 9);
    r.display();
}