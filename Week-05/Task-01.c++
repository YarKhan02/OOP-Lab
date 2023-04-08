#include <iostream>
using namespace std;

class A{
    public:
        static int x;

        static void func() {
            cout << "Static member function called." << endl;
        }
};

int A::x = 0;

int main(){
    cout << "Static data member value: " << A::x << endl;

    A::func();

    A::x = 42;

    cout << "Static data member value: " << A::x << endl;

    return 0;
}


/*The use of static data members and static member functions can be beneficial 
in situations where we need to share data or functionality between multiple 
objects of a class. Because static data members are shared among all objects of the class*/

/*The difference between this code and code without static members is that without static members, 
each object of the class would have its own copy of the data member and member function. 
This can lead to unnecessary memory usage and duplication of functionality.*/