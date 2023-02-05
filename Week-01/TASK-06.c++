#include <iostream>
#include <cstring>

using namespace std;

int word_count(char *words, int l){
    int count = 0;
    
    for (int i = 0; i < l; i++){
        if (words[i] != '/n'){
            count++;
        }
    }

    return count;
}

int main(){
    char words[20] = "WaliYarKhan";
    int l = strlen(words);

    int count = word_count(words, l);

    cout << "There are " << count << " words";
}