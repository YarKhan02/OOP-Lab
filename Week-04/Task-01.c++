#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length, breadth;

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        Rectangle(){
            length = 0;
            breadth = 0;
        }

        Rectangle(int x){
            length = x;
            breadth = x;
        }

        int area(){
            return length * breadth;
        }
};

int main(){
    Rectangle r1(3, 5);
    Rectangle r2;
    Rectangle r3(7);

    cout << "R-1 Area: " << r1.area() << endl;
    cout << "R-2 Area: " << r2.area() << endl;
    cout << "R-3 Area: " << r3.area() << endl;
}