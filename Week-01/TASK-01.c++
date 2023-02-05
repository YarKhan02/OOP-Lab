#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void output(int *arr){
    int output;

    cout << "After divisible by 2 and 3" << endl;

    for (int i = 0; i < 20; i++){
        if (i < 10){
            output = *(arr + i) / 2;
            cout << output << " ";
        }
        else {
            if (i == 10){
                cout << endl;
            }
            output = *(arr + i) / 3;
            cout << output << " ";
        }
        
    }
}

int main(){
    srand(time(0));

    int *arr;
    arr = (int*)calloc(20, sizeof(int));

    cout << "Original Array" << endl;

    for (int i = 0; i < 20; i++){
        if (i < 10){
            *(arr + i) = rand() % 100 + 1;
            cout << *(arr + i) << " ";
        }
        else {
            if (i == 10){
                cout << endl;
            }
            *(arr + i) = rand() % 100 + 1;
            cout << *(arr + i) << " ";
        }
    }

    cout << endl << endl;

    output(arr);

    free(arr);
}