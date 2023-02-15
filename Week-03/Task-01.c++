#include <iostream>
using namespace std;

class Area{
    private:
        int length, breadth;

    public:
        void setDim(int l, int b){
            length = l;
            breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int getArea(){
            return length*breadth;
        }

        void display(){
            cout << "Length = " << length <<endl;
            cout << "Breadth = " << breadth <<endl;
        }
};

int main(){
    Area a;

    a.setDim(3, 9);
    a.display();
    cout << "The area is " << a.getArea();
}