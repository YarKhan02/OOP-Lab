#include <iostream>

using namespace std;

int power(int n, int p){
    if (p == 0){
        return 1;
    }

    return n*power(n, p - 1);
}

int main(){
    int n, p, x;

    cout << "Enter number: ";
    cin >> n;
    cout << "Enter power of a number: ";
    cin >> p;

    x = power(n, p);

    cout << n << " power of " << p << " is " << x;
}