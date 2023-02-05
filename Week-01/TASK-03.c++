#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void student_data(char data[15][140]){
    int correct = 0;
    int correct_data[15];

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 14; j++){
            if (data[i][j] == 'T'){
                correct++;
            }
        }
        correct_data[i] = correct;
        correct = 0;
    }

    for (int i = 0; i < 15; i++){
        cout << "Student " << i + 1<< endl;
        for (int j = 0; j < 14; j++){
            if (j == 0){
                cout << "Roll No. ";
            }
            if (j < 4){
                cout << data[i][j];
            }
            if (j == 3){
                cout << "\nTest Scores: ";
            }
            if (j > 3){
                cout << data[i][j];
            }
        }
        int marks = ((correct_data[i] * 100) / 10);

        if (marks >= 90){
            cout << "\nMarks: " << marks;
            cout << "\nGrade: " << 'A';
        }
        else if ((marks < 90) && (marks >= 80)){
            cout << "\nMarks: " << marks;
            cout << "\nGrade: " << 'B';
        }
        else if ((marks < 80) && (marks >= 70)){
            cout << "\nMarks: " << marks;
            cout << "\nGrade: " << 'C';
        }
        else if ((marks < 70) && (marks >= 60)){
            cout << "\nMarks: " << marks;
            cout << "\nGrade: " << 'D';
        }
        else{
            cout << "\nMarks: " << marks;
            cout << "\nGrade: " << 'F';
        }
        cout << "\n\n";
    }
}

int main(){
    char data[15][140] = {"1022TFTTF_TFTT", "1023TTTTFTTFTT", "1024T_TTT_TF_T", "1025TFFFF_TFTT", "1026TTTTFTTFTT",
                        "1027FFTFF_TTTT", "1028FFTTFFTFTT", "1029TTTTTTTTTT", "1030_FFTF_TFTT", "1031TF_TFFTFTT",
                        "1032TTFTFTTFTT", "1033_F_TF_TFT_", "1034TTTTFTTFTF", "1035FFTTTTTFFF", "1035TFTTFTTTTT"};

    student_data(data);

}