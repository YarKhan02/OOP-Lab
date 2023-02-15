#include <iostream>
#include <ctime>
using namespace std;

void display(int a, int b){
    cout << "\n\nMinimum number in an array: " << a << endl;
    cout << "Maximum number in an array: " << b;
}

void minmax(int *arr, int *min, int *max, int n = 10){
    if (n == 0){
        return;
    }

    if (*(arr + n) > *max){
        *max = *(arr + n);
    }
    else if (*(arr + n) < *min){
        *min = *(arr + n);
    }
    return minmax(arr, min, max, n - 1);
}

void input(){
    srand(time(0));

    int arr[10];

    cout << "\t  Array" << endl;

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    int min = 100000, max = -1;

    minmax(arr, &min, &max);
    display(min, max);
}

int main(){
    input();
}