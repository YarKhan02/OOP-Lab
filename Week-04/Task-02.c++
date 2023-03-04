#include <iostream>
#include <ctime>

using namespace std;

class Matrix{
    public:
        int rows, columns, **matrix, **addm, **multiplym, add, multiply;

        Matrix(){
            addm = new int*[rows];
                for (int i = 0; i < rows; i++){
                    addm[i] = new int[columns];
                }

            multiplym = new int*[rows];
                for (int i = 0; i < rows; i++){
                    multiplym[i] = new int[columns];
                }
        }

        Matrix(int r, int c){
            rows = r;
            columns = c;

            matrix = new int*[rows];
            for (int i = 0; i < rows; i++){
                matrix[i] = new int[columns];
            }
        }

        int getRows(){
            return rows;
        }

        int getColumns(){
            return columns;
        }

        void setElements(){
            srand(time(0));

            for (int i = 0; i < rows; i++){
                for (int j = 0; j < columns; j++){
                    matrix[i][j] = rand() % 100 + 1;
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }

            cout << "\n";
        }

        void addMatrix(Matrix* A, Matrix* B){
            if (((A -> getRows()) == (B -> getRows())) && ((A -> getColumns()) == (B -> getColumns()))){

                for (int i = 0; i < A -> getRows(); i++){
                    for (int j = 0; j < A -> getColumns(); j++){
                        addm[i][j] = (A -> matrix[i][j]) + (B -> matrix[i][j]);
                    }
                }
                add = 1;
            }
            else{
                cout << "Matrix cannot be added" << endl;
            }
        }

        void multiplyMatrix(Matrix* A, Matrix* B){
            if ((A -> getRows()) != (B -> getRows())){
                cout << "Matrix cannot be multiplied" << endl;
            }
            else{

                for (int i = 0; i < A -> getRows(); i++){
                    for (int j = 0; j < B -> getColumns(); j++){
                        multiplym[i][j] = 0;
                        for (int k = 0; k < A -> getColumns(); k++){
                            multiplym[i][j] += A -> matrix[i][k] + B -> matrix[k][j];
                        }
                    }
                }
                multiply = 1;
            }
        }

        void display(Matrix* A, Matrix* B){
            if (add == 1){
                cout << "The addition of matrices" << endl;

                for (int i = 0; i < A -> getRows(); i++){
                    for (int j = 0; j < B -> getColumns(); j++){
                        cout << addm[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "\n";
            }

            if (multiply == 1){
                cout << "The multiplication of matrices" << endl;

                for (int i = 0; i < A -> getRows(); i++){
                    for (int j = 0; j < B -> getColumns(); j++){
                        cout << multiplym[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "\n";
            }
        }
};

int main(){
    Matrix A(3, 3);
    Matrix B(3, 3);

    A.setElements();
    B.setElements();

    Matrix C;

    C.addMatrix(&A, &B);
    C.multiplyMatrix(&A, &B);
    C.display(&A, &B);
}