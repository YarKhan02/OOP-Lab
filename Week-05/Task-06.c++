#include <iostream>
#include <cstring>
using namespace std;

class Count{
    public:
        static int vowels, consonants;

        void count(char sentence[], int l){

            for (int i = 0; i < l; i++) {
                if (((sentence[i] >= 'a') && (sentence[i] <= 'z')) || ((sentence[i] >= 'A') && (sentence[i] <= 'Z'))) {
                    if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
                        vowels++;
                    }
                    else {
                        consonants++;
                    }
                }
            }

            cout << "Number of vowels: " << vowels << endl;
            cout << "Number of consonants: " << consonants << endl;
        }
};

int Count::vowels = 0;
int Count::consonants = 0;

int main(){
    Count c;

    char sentence[] = "Wali Yar Khan";
    int l = strlen(sentence);

    c.count(sentence, l);

}