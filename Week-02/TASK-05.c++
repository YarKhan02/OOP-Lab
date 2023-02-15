#include <iostream>
#include <ctime>
using namespace std;

struct ComplexNumbers{
    int real;
    int imaginary;
}x, y;

int main(){
    srand(time(0));

    int n, a, b;

    x.real = rand() % 100 + 1;
    x.imaginary = rand() % 100 + 1;

    y.real = rand() % 100 + 1;
    y.imaginary = rand() % 100 + 1;

    cout << "\nx-equation\n" << x.real << " + " << x.imaginary << "i" << endl;
    cout << "\ny-equation\n" << y.real <<" + " << y.imaginary << "i" << endl;

    cout << "\nWhat do you want to perform?\n1) Addition\n2) Subtraction\nEnter ";
    cin >> n;

    if (n == 1){
        a = x.real + y.real;
        b = x.imaginary + y.imaginary;
    }
    if (n == 2){
        a = x.real - y.real;
        b = x.imaginary - y.imaginary;
    }

    cout << "\nComplex Numbers Equation\n" << a << " + " << b << "i";
}