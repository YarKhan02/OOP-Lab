#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sort_function(int *arr, int size, int order){
    int temp;

    if (order == 0){
        for (int i = 0; i < size - 1; i++){
            for (int j = 0; j < size - 1; j++){
                if (arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if (order == 1){
        for (int i = 0; i < size - 1; i++){
            for (int j = 0; j < size - 1; j++){
                if (arr[j] < arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    cout << "\nAfter sorting" << endl;

    for (int k = 0; k < size; k++){
        cout << *(arr + k) << " ";
    }
}

int main(){
    srand(time(0));

    int n;
    n = rand() % 10 + 1;

    int *arr;
    arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
    }

    cout << "Original array" << endl;

    for (int k = 0; k < n; k++){
        cout << *(arr + k) << " ";
    }

    int order;

    cout << "\n\nIn which order to sort\n1) Ascending - 0\n2) Descending - 1\n\nEnter: ";
    cin >> order;

    sort_function(arr, n, order);
}