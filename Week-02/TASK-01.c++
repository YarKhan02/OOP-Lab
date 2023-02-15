#include <iostream>

using namespace std;

float add_integral(float n){
    return n + 1;

}

float add_factional(float n){
    return n + 0.1;

}

int main(){
    float n, result;
    int x;

    cout << "Enter number: ";
    cin >> n;

    cout << "\n1) Add Integral\n2) Add Factional\nEnter ";
    cin >> x;

    if (x == 1){
        result = add_integral(n);
    }
    else if (x == 2){
        result = add_factional(n);
    }

    cout << "\nResult = " << result;
}