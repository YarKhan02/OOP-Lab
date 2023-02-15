#include <iostream>

using namespace std;

struct Point{
    int xCord;
    int yCord;
};

void add_points(struct Point p1, struct Point p2){
    cout << "Point1" << endl;
    cout << "xCord: ";
    cin >> p1.xCord;
    cout << "yCord: ";
    cin >> p1.yCord;

    cout << "\nPoint2" << endl;
    cout << "xCord: ";
    cin >> p2.xCord;
    cout << "yCord: ";
    cin >> p2.yCord;

    int x = p1.xCord + p2.xCord;
    int y = p1.yCord + p2.yCord;

    cout << "\nx-point: " << x << endl;
    cout << "y-point: " << y << endl;
}

int main(){
    struct Point p1, p2;
    add_points(p1, p2);
}