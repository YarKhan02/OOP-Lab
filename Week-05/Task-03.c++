#include <iostream>

using namespace std;

class Distance{
    private:
        static int feet;
        static int inch;

    public:
        void setDistanceFeet(int d){
            feet = d;
        }

        int getDistaneFeet(){
            return feet;
        }

        void setDistanceInch(int d){
            inch = d;
        }

        int getDistaneInch(){
            return inch;
        }

        static void addDistance(){
            int y;

            y = feet + inch;

            cout << "Total distace is " << y << endl;
        } 

};

int Distance::feet = 0;
int Distance::inch = 0;

int main(){
    Distance d1, d2;

    d1.setDistanceFeet(5);
    d2.setDistanceInch(3);

    Distance::addDistance();
}