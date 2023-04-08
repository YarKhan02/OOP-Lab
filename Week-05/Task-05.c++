#include <iostream>

using namespace std;

class Pattern{
    public:
        static int row, col;

        void displayPattern(int x){
            if(x == 1){
                for (int i = 0; i < row; i++){
                    for (int j = 0; j <= i; j++){
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            else if(x == 2){
                for (int i = 0; i < row; i++){
                    for (int j = 0; j <= i; j++){
                        cout << j + 1 << " ";
                    }
                    cout << endl;
                }
            }
            else if(x == 3){
                for (int i = 0; i < row; i++){
                    for (int j = 0; j <= i; j++){
                        cout << char('A' + j) << " ";
                    }
                    cout << endl;
                }
            }
        }
};

int Pattern::row = 3;
int Pattern::col = 3;

int main(){
    Pattern p;

    int n;

    cout << "What type of pattern?\nPress: ";
    cin >> n;

    p.displayPattern(n);
}