#include <iostream>

using namespace std;

class Example {
    private:
        int data;
        static int count;

    public:
        Example(int y = 10):data(y){}

        int getIncrementData() const {
            return ++data;
        }

        static int getCount() {
            cout << "Data is " << data << endl; // non-static member in static member function

            return count;
        }
};

int Example::count = 0;

int main(){
    Example e();
}
