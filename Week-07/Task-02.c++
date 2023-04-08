#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x_cord, y_cord;

        Point(){}

        Point(int x, int y){
            x_cord = x;
            y_cord = y;
        }

        void display(){
            cout << x_cord + y_cord << endl;
        }
};

class Line: public Point{
    public:
        int start_point, end_point;

        Line(int s, int e){
            start_point = s;
            end_point = e;
        }

        void display(){
            cout << "Distance = " << sqrt(((start_point - x_cord)^2) + ((end_point - y_cord)^2)) << endl;
        }
};

int main(){
    Point p(6, 8);

    Line l1(9, 12);
    Line l2(16, 9);

    l1.display();
    l2.display();
}