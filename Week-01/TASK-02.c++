#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void merge_sort(int *A, int  *B, int *C, int M, int N, int Z){
    int i = 0, j = 0, k = 0;

    while ((i < M) && (j < N)){

        if (A[i] <= B[j]){
            C[k] = A[i];
            i++;
            k++;
        }
        else {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    if (i < M){
        while (i < M){
            C[k] = A[i];
            k++;
            i++;
        }
    }
    else{
        while (i < N){
            C[k] = B[j];
            k++;
            j++;
        }
    }

    cout << "Array C after merging" << endl;

    for (int x = 0; x < Z; x++){
        cout << C[x] << " ";
    }
}

void sorting(int *A, int *B, int M, int N){
    int temp;

    for (int i = 0; i < M - 1; i++){
        for (int j = 0; j < M - 1; j++){
            if (A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N - 1; i++){
        for (int j = 0; j < N - 1; j++){
            if (B[j] > B[j + 1]){
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    cout << "Array A after sorting" << endl;

    for (int k = 0; k < M; k++){
        cout << *(A + k) << " ";
    }

    cout << "\n\nArray B after sorting" << endl;

    for (int k = 0; k < N; k++){
        cout << *(B + k) << " ";
    }

    cout << endl << endl;
}

int main(){
    srand(time(0));

    int M, N;

    M = (rand() % (10 - 3 + 1)) + 3;
    N = (rand() % (10 - 3 + 1)) + 3;

    int *A, *B, *C;

    A = (int*)calloc(M, sizeof(int));
    B = (int*)calloc(N, sizeof(int));
    C = (int*)calloc(M + N, sizeof(int));

    cout << "Array A before sorting" << endl;

    for (int i = 0; i < M; i++){
        *(A + i) = rand() % 100 + 1;
        cout << *(A + i) << " ";
    }

    cout << "\n\nArray B before sorting" << endl;

    for (int i = 0; i < N; i++){
        *(B + i) = rand() % 100 + 1;
        cout << *(B + i) << " ";
    }

    cout << "\n\nArray C" << endl;

    for (int i = 0; i < M + N; i++){
        cout << *(C + i) << " ";
    }

    cout << "\n\n";

    sorting(A, B, M, N);

    merge_sort(A, B, C, M, N, M + N);
}