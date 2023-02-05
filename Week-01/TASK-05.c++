#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int A[3][3], B[3][3], C[3][3];

    cout << "Array A\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            A[i][j] = rand() % 100 + 1;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n----------\n\nArray B\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            B[i][j] = rand() % 100 + 1;
            cout << B[i][j] << " ";
        }
        cout << endl;
    } 

    cout << "\n----------\n\nA + B  = Array C\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] <<" ";
        }
        cout << endl;
    }
}