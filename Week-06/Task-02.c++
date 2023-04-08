#include <iostream>

using namespace std;

class Point {
    private:
        int x;
        int y;

    public:
        Point(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }

        void addPoint(const Point& p) {
            x += p.x;
            y += p.y;
        }

        void subtractPoint(const Point& p) {
            x -= p.x;
            y -= p.y;
        }

        void multiplyPoint(const Point& p) {
            x *= p.x;
            y *= p.y;
        }

        void display() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);

    p1.addPoint(p2);
    p1.display();

    p2.subtractPoint(p3);
    p2.display();

    p1.multiplyPoint(p3);
    p1.display();
}
