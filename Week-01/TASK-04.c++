#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void upper_half(int N, int *arr[]){
    int y = N;

    cout << "----------\nUpper Half\n\n";

    for (int i = 0; i < N; i++){
        for (int j = 0; j < y; j++){
            arr[i][j] = rand() % 10 + 1;
            cout << arr[i][j] <<" ";
        }
        cout << endl;
        y--;
    }
}

int main(){
    srand(time(0));

    int N;

    cout << "Enter size of 2D array: ";
    cin >> N;

    int *arr[N];

    for (int k = 0; k < N; k++){
        arr[k] = (int*)malloc(N * sizeof(int));
    }    

    cout << "----------\n2-D Array\n\n";

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            arr[i][j] = rand() % 10 + 1;
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    upper_half(N, arr);
}