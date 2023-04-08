#include <iostream>

using namespace std;

class Area{
    public:
        int length;
        int breadth;

        Area(){
            length = 0;
            breadth = 0;
        }

        double area_of_square(const double length) {
            return length * length;
        }

        double area_of_rectangle(const double length, const double breadth) {
            return length * breadth;
        }
};

int main() {
    Area a;

    cout << "Area of square is " << a.area_of_square(25) << endl;
    cout << "Area of rectangle is " << a.area_of_rectangle(7, 3) << endl;
}
