#include <iostream>
#include <ctime>
using namespace std;

void display(int a, int b){
    cout << "\n\nMinimum number in an array: " << a << endl;
    cout << "Maximum number in an array: " << b;
}

void minmax(int arr[], int n = 10){
    int temp;

    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    }

    int minimum = arr[0];
    int maximum = arr[9];

    display(minimum, maximum);
}

void input(){
    srand(time(0));

    int arr[10];

    cout << "\t  Array" << endl;

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    minmax(arr);
}

int main(){
    input();
}