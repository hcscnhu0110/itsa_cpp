#include <iostream>
#include <string>
using namespace std;

//字母出現的頻率

int main(){
    int alpha[30] = {0};
    string word;
    while(getline(cin, word)){
        int len = word.length();
        for(int i = 0; i < len; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                alpha[word[i] - 'a'] += 1;
            }
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                alpha[word[i] - 'A'] += 1;
            }
        }
        cout << alpha[0];
        for(int i = 1; i < 26; i++){
            cout << " " << alpha[i];
        }
        cout << "\n";
    }
}